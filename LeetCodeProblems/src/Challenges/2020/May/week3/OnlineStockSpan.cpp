#include "OnlineStockSpan.h"

OnlineStockSpan::OnlineStockSpan() {
	// TODO Auto-generated constructor stub

}

OnlineStockSpan::~OnlineStockSpan() {
	// TODO Auto-generated destructor stub
}

// JAVA Code

/*class StockSpanner {

    Stack<Integer> prices, weights;

    public StockSpanner() {
        prices = new Stack();
        weights = new Stack();
    }

    public int next(int price) {
        int w = 1;
        while(!prices.isEmpty() && price >= prices.peek()){
            prices.pop();
            w += weights.pop();
        }
        prices.push(price);
        weights.push(w);
        return w;
    }
}*/

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner();
 * int param_1 = obj.next(price);
 */

