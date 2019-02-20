#pragma once
#include <string>
#include<vector>
#include"huffman.hpp"
struct CharInfo {

	CharInfo(unsigned long long count = 0)
		: _count(count)
	{}

	char _ch;
	unsigned long long _count;
	std::string _strCode;

	CharInfo operator+(const CharInfo& info)
	{
		return CharInfo(_count + info._count);
	}
	bool operator>=(const CharInfo& info)
	{
		return (!(_count <info. _count));
	}
	bool operator!=(const CharInfo& info) const
	{
		return _count != info._count;
	}
};
class FileCompress {
	public:
		FileCompress();
		void CompressFile(const std::string& strFilePath);
		//void UNCompressFile(const std::string& strFilePath);
private:
	void GetHuffmanCode(HTNode<CharInfo>* pRoot);
private:
		std::vector<CharInfo> _fileInfo;
};
