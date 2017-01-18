#pragma once
#include "stdafx.h"

class COnlineTestsGenerate
{
public:
	COnlineTestsGenerate();
	COnlineTestsGenerate(size_t num);
	void SetSize(size_t num);
	void MakeRegLine(std::string line);
	void ClearTests();
	void WriteTests(std::string const & name);
	size_t GetCount()const;
	std::vector<std::vector<std::string>> GetTests()const;
	std::vector<size_t> GetNamePlace()const;
private:
	void AddSpaces();
	void GenerateLine();
	size_t n;
	size_t numberOfTests;
	size_t count = 0;
	std::vector<size_t> namePlace;
	std::vector<size_t> lengthReg;
	std::vector<std::vector<std::string>> tests;
	std::string m_line;
};

