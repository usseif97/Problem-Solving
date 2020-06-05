/*
 * ContiguousArray.cpp
 *
 *  Created on: May 26, 2020
 *      Author: Usseif
 */

#include "ContiguousArray.h"

ContiguousArray::ContiguousArray() {
	// TODO Auto-generated constructor stub

}

ContiguousArray::~ContiguousArray() {
	// TODO Auto-generated destructor stub
}


// JAVA Code

/*int findMaxLength(int[] nums) {

       Map<Integer, Integer> map = new HashMap<>();
       int sum = 0, maxLen = 0;

       for(int i = 0; i < nums.length; i++){
           sum += (nums[i] == 0 ? -1 : 1);
           if(!map.containsKey(sum)){
               map.put(sum, i);
           } else {
               maxLen = Math.max(maxLen, i - map.get(sum)); // index that have the same sum
           }
           if(sum == 0){
               maxLen = Math.max(maxLen, i + 1); // index -1 have the sum sum
           }
       }
       return maxLen;
}*/

