#include <iostream>
#include <vector>
#include <string>




enum class OrderType
{
    GoodTillCancel,
    FillAndKill
};

enum class Side
{
    Buy,
    Sell
};

using Price = std::int32_t;
using Quantity = std::uint32_t;
using OrderId = std::uint64_t;

struct LevelInfo
{
	Price price_;
	Quantity quantity_;
};

using LevelInfos = std::vector<LevelInfo>;

class OrderbookLevelInfos
{
public:
	OrderbookLevelInfo(const LevelInfos& bids, const LevelInfos& asks)
		: bids_{ bids }
		, asks_{ asks }
	{ }
	
	const LevelInfos& GetBids() const { return bids_; }
	const LevelInfos& GetAsks() const { return asks_; }

private:
	LevelInfos bids_;
	LevelInfos asks_;
};


int main()
{
	return 0;
}
