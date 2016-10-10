#include "DoubleLinked.h"


DoubleLinked::DoubleLinked()
{
	m_nodeHead = NULL;
	m_nodeTail = NULL;
}

void DoubleLinked::Add(int iValue)
{
	if (!m_nodeHead)
	{
		Node* _temp = new Node(iValue);
		m_nodeHead = _temp;
		m_nodeTail = _temp;
		m_nodeTail->m_previous = NULL;
	}
	else
	{
		Node* _temp = new Node(iValue);
		_temp->m_previous = m_nodeHead;
		m_nodeHead->m_next = _temp;
		_temp->m_next = NULL;

		m_nodeHead = _temp;
	}
}

void DoubleLinked::Add(float fValue)
{
	if (!m_nodeHead)
	{
		Node* _temp = new Node(fValue);
		m_nodeHead = _temp;
		m_nodeTail = _temp;
	}
	else
	{
		Node* _temp = new Node(fValue);
		_temp->m_previous = m_nodeHead;
		m_nodeHead->m_next = _temp;
		_temp->m_next = NULL;
		
		m_nodeHead = _temp;
	}
}

void DoubleLinked::Add(std::string strValue)
{
	if (!m_nodeHead)
	{
		Node* _temp = new Node(strValue);
		m_nodeHead = _temp;
		m_nodeTail = _temp;
	}
	else
	{
		Node* _temp = new Node(strValue);
		_temp->m_previous = m_nodeHead;
		m_nodeHead->m_next = _temp;
		_temp->m_next = NULL;
		
		m_nodeHead = _temp;
	}
}

void DoubleLinked::OutputList()
{
	while (m_nodeHead)
	{
		m_nodeHead->OutputValue();
		m_nodeHead = m_nodeHead->m_previous;
	}
}


DoubleLinked::~DoubleLinked()
{
	while (m_nodeHead)
	{
		delete m_nodeHead;
		m_nodeHead = m_nodeHead->m_previous;
	}
}
