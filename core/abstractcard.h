#ifndef ABSTRACTCARD_H
#define ABSTRACTCARD_H

#include <string>

class AbstractCard 
{

public:
	AbstractCard(int nId, int nNumber, std::string sName);
	~AbstractCard();
public:

	enum Suit    //花色  
	{
		SpadeSuit,
		ClubSuit, 
		HeartSuit, 
		DiamondSuit, 
		UnknownSuit = -1
	};
	enum Color 
	{ 
		RedColor,  //
		BlackColor, 
		UnknowColor = -1 
	};
	enum HandMethod //处理方法  可能是弃牌，还是与别人拼点，交换什么的
	{
		UseMethod, 
		ResponseMethod, 
		DiscardMethod, 
		RecastMethod, 
		PindianMethod, 
		UnknowMethod = -1
	};
	enum CardType 
	{ 
		SkillType, 		//人物技能
		BasicType, 		//基础牌，杀，闪，酒，桃
		TrickType,   	//技能 闪电，乐不思蜀，兵粮寸断
		EquipType,  	//装备
		UnknowType = -1
	};
	inline Suit cardSuit() const
	{
		return m_eSuit;
	}
	void setSuit(Suit eSuit);

	inline Color cardColor() const
	{
		return m_eColor;
	}
	void setCardColor(Color eColor);

	inline HandMethod cardHandMethod() const
	{
		return m_eHandMethod;
	}
	void setCardHandMethod(HandMethod eHandMethod);

	inline CardType cardType() const
	{
		return m_eCardType;
	}
	void setCardType(CardType eCardType);

	inline int cardId() const
	{
		return m_nId;
	}
	void setId(int nId);
	
	inline int cardNumber() const
	{
		return m_nNumber;
	}
	void setCardNumber(int nNumber);

	inline std::string cardName() const
	{
		return m_sName;
	}
	void setName(const std::string& sName);

	inline bool isBlack() const
	{
		return BlackColor == m_eColor;
	}
	
	inline bool isRed() const
	{
		return !isBlack();
	}
	
	inline bool isSameColor(const AbstractCard& otherCard) const
	{
		return (m_eColor == otherCard.m_eColor);
	}
	bool compareSuit(const AbstractCard& cardA, const AbstractCard& cardB);
	bool compareNumber(const AbstractCard& cardA, const AbstractCard& cardB);
	 
private:
	int m_nId;
	int m_nNumber;
	Suit m_eSuit;
	Color m_eColor;
	HandMethod m_eHandMethod;
	CardType m_eCardType;
	std::string m_sName;
	int m_nTest;
};

#endif // ABSTRACTCARD_H
