#include "PrisonCellsAfterNDays.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

PrisonCellsAfterNDays::PrisonCellsAfterNDays() {
	// TODO Auto-generated constructor stub

}

PrisonCellsAfterNDays::~PrisonCellsAfterNDays() {
	// TODO Auto-generated destructor stub
}


vector<int> PrisonCellsAfterNDays::prisonAfterNDays(vector<int>& cells, int N) {

    unordered_set<string> cellsSet;
    int cycle = false;
    int count = 0;

    for(int i = 0; i < N; i++){

        vector<int> newCell = nextDay(cells);

        // Convert Vector to String
        ostringstream vts;
        string newCellStr;
        if (!newCell.empty()) {
            std::copy(newCell.begin(), newCell.end() - 1, std::ostream_iterator<int>(vts, ", "));
            vts << newCell.back();
        }
        newCellStr = vts.str();

        // check newState in the Set
        if(cellsSet.find(newCellStr) != cellsSet.end()){
            cycle = true;
            break;
        }

        cellsSet.insert(newCellStr);
        count++;
        cells = newCell;


    }

    if(cycle)
        return prisonAfterNDays(cells, N % count);
    return cells;
}


vector<int> PrisonCellsAfterNDays::nextDay(vector<int>& cells){

    vector<int> next;
    for (int i = 0; i < cells.size(); i++)
        next.push_back(cells[i]);

    // First & Last Cells must equal Zero
    next[0] = 0;
    next[next.size() - 1] = 0;

    for(int i = 1; i <= 6; i++){
        if(cells[i - 1] == cells[i + 1])
            next[i] = 1;
        else
            next[i] = 0;
    }
    return next;
}
