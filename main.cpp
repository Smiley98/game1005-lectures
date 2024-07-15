#include <iostream>
#include <unordered_set>

struct Cell
{
	int row;
	int col;

	bool operator==(Cell cell) const
	{
		return row == cell.row && col == cell.col;
	}
};

struct CellHash
{
	size_t operator()(Cell cell) const
	{
		int rowHash = std::hash<int>()(cell.row);
		int colHash = std::hash<int>()(cell.col) << 1;
		return rowHash ^ colHash;
	}
};

int main()
{
	std::unordered_set<Cell, CellHash> cells;
	cells.insert({ 0, 0 });
	cells.insert({ 1, 1 });
	bool foundYes = cells.find({ 1, 1 }) != cells.end();
	bool foundNo = cells.find({ 1, 0 }) != cells.end();
	return 0;
}
