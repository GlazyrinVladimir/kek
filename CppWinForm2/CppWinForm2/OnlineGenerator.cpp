
#include "OnlineGenerator.h"
//CGI
COnlineTestsGenerate::COnlineTestsGenerate(size_t num)
{
	SetSize(num);
}

COnlineTestsGenerate::COnlineTestsGenerate()
{
}

void COnlineTestsGenerate::SetSize(size_t num)
{
	numberOfTests = num;
	tests.resize(numberOfTests);
}

std::vector<std::vector<std::string>> COnlineTestsGenerate::GetTests()const
{
	return tests;
}

void COnlineTestsGenerate::ClearTests()
{
	tests.clear();
	lengthReg.clear();
	tests.resize(numberOfTests);
	count = 0;
	//WriteTests();
}

size_t COnlineTestsGenerate::GetCount()const
{
	return count;
}

void COnlineTestsGenerate::WriteTests(std::string const & name)
{
	std::ofstream outputFile(name);

	for (size_t i = 0; i < namePlace.size(); i++)
	{
		if (i + 1 != namePlace.size())
		{
			outputFile << tests[0][namePlace[i]] << ",";
		}
		else
		{
			outputFile << tests[0][namePlace[i]];
		}
	}
	outputFile << std::endl;
	namePlace.push_back(0);

	for (size_t i = 0; i < numberOfTests; i++)
	{
		size_t countName = 0;
		for (size_t j = 0; j < count; j++)
		{
			if (j == namePlace[countName])
			{
				countName++;
			}
			else
			{
				outputFile << tests[i][j];
				if (j + 1 == namePlace[countName])
				{
					outputFile << ",";
				}
			}
		}
		outputFile << std::endl;
	}
}

std::vector<size_t> COnlineTestsGenerate::GetNamePlace()const
{
	return namePlace;
}

void COnlineTestsGenerate::MakeRegLine(std::string line)
{
	m_line = line;
	//m_line += '\0';
	AddSpaces();
	std::istringstream regStream(m_line);
	std::string name;
	regStream >> name;
	namePlace.push_back(count);
	name = name;
	lengthReg.push_back(count);
	count++;
	for (size_t i = 0; i < numberOfTests; i++)
	{
		tests[i].push_back(name);
	}

	while (!regStream.eof())
	{
		regStream >> m_line;
		std::cout << m_line;
		count++;

		if (m_line[0] == '[' && m_line[m_line.length() - 1] == ']')
		{
			GenerateLine();
		}
		else
		{
			std::vector<std::string> someWords;
			std::string word;
			for (size_t i = 0; i < m_line.length(); i++)
			{
				if (m_line[i] == '/')
				{
					someWords.push_back(word);
					word.clear();
				}
				else
				{
					word.push_back(m_line[i]);
				}
			}
			if (word.length() > 0)
			{
				someWords.push_back(word);
			}
			for (size_t i = 0; i < numberOfTests;i++)
			{
				tests[i].push_back(someWords[rand() % (someWords.size())]);
			}
		}
	}
}

void COnlineTestsGenerate::GenerateLine()
{
	std::vector<int> symbols;
	size_t length = 0;
	for (size_t i = 1; i < m_line.length() - 1; i++)
	{
		std::cout << m_line[i] << std::endl;
		if (m_line[i] == '{')
		{
			size_t j = i + 1;
			std::string number = "";
			bool isFinish = false;
			while (m_line[j] != '}' && j < m_line.length() - 1)
			{
				number += m_line[j];
				j++;
				if (m_line[j] == '}')
				{
					isFinish = true;
				}
			}
			if (isFinish)
			{
				size_t lastLength = length;
				try
				{
					length = stoi(number);
				}
				catch (...)
				{
					length = lastLength;
				}
			}
			i += j - i;
		}
		else
		{
			if (m_line[i] == '-' && m_line[i + 1] != ']')
			{
				symbols.pop_back();
				for (size_t j = size_t(m_line[i - 1]); j < size_t(m_line[i + 1]); j++)
				{
					symbols.push_back(j);
				}
			}
			else
			{
				symbols.push_back(int(m_line[i]));
			}
		}
	}
	std::string line;
	//добавление нового куска выражения
	for (size_t j = 0; j < numberOfTests; j++)
	{
		for (size_t i = 0; i < length; i++)
		{
			line.push_back(char(symbols[rand() % symbols.size()]));
		}
		tests[j].push_back(line);
		line.clear();
	}
	
}

void COnlineTestsGenerate::AddSpaces()
{
	std::string lineWithSpaces;
	bool isBracket = false;
	for (size_t i = 0; i < m_line.length(); i++)
	{
		if (m_line[i] == '[')
		{
			lineWithSpaces.push_back(' ');
			lineWithSpaces.push_back('[');
			isBracket = true;
		}
		else
			if (m_line[i] == ']')
			{
				lineWithSpaces.push_back(']');
				if (i + 1 < m_line.length())
				{
					lineWithSpaces.push_back(' ');
				}
				isBracket = false;
			}
			else
				if (isBracket)
				{
					if (m_line[i] != ' ')
					{
						lineWithSpaces.push_back(m_line[i]);
					}
				}
				else
				{
					lineWithSpaces.push_back(m_line[i]);
				}
	}
	m_line = lineWithSpaces;
}