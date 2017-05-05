#include "abstractcard.h"

AbstractCard(int nId, int nNumber, std::string sName)
	:m_nId(nId), m_nNumber(nNumber), m_sName(sName)
{

}

AbstractCard::~AbstractCard()
{
	
}

void AbstractCard::setSuit(Suit eSuit)
{
	m_eSuit = eSuit;
}

void AbstractCard::setCardColor(Color eColor)
{
	m_eColor = eColor;
}

void AbstractCard::setCardHandMethod(HandMethod eHandMethod)
{
	m_eHandMethod = eHandMethod;
}

void AbstractCard::setCardType(CardType eCardType)
{
	m_eCardType = eCardType;
}

void AbstractCard::setId(int nId)
{
	m_nId = nId;
}

void AbstractCard::setCardNumber(int nNumber)
{
	m_nNumber = nNumber;
}

void AbstractCard::setName(const std::string& sName)
{
	m_sName = sName;
}

bool AbstractCard::compareSuit(const AbstractCard& cardA, const AbstractCard& m_eSuit)
{
	return (cardA.m_eSuit == m_eSuit.m_eSuit);
}

bool AbstractCard::compareNumber(const AbstractCard& cardA, const AbstractCard& cardB)
{
	return (cardA.m_nNumber == cardB.m_nNumber)
}