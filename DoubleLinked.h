#pragma once

#include <iostream>
#include <string>

using namespace std;

struct Node
{
	int			m_iNodeValue;
	float		m_fNodeValue;
	std::string m_strNodeValue;
	Node* m_previous;
	Node* m_next;

	Node()
	{
		m_iNodeValue	= 0;
		m_fNodeValue	= 0.0f;
		m_strNodeValue	= "";
	}

	Node(int iValue)
	{
		m_iNodeValue = iValue;
		m_fNodeValue = 0.0f;
		m_strNodeValue = "";
	}
	Node(float fValue)
	{
		m_fNodeValue = fValue;
		m_iNodeValue = 0;
		m_strNodeValue = "";
	}
	Node(const std::string& strValue)
	{
		m_strNodeValue = strValue;
		m_iNodeValue = 0;
		m_fNodeValue = 0.0f;
	}

	void OutputValue()
	{
		if (m_iNodeValue)
		{
			std::cout << "value int : " << m_iNodeValue << endl;
		}
		else if (m_fNodeValue)
		{
			std::cout << "value float : " << m_fNodeValue << endl;
		}
		else
		{
			std::cout << "value string : " << m_strNodeValue << endl;
		}
	}

};

class DoubleLinked
{
public:
	DoubleLinked();

	void Add(int iValue);
	void Add(float fValue);
	void Add(std::string strValue);
	void OutputList();

	~DoubleLinked();

private:
	Node* m_nodeHead;
	Node* m_nodeTail;
};

