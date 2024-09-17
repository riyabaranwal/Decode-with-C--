//Find median from data stream leetcode 295
//all elements of left i.e maxHeap should be <= all ele of right
//size of left and right should be same or should be 1
//add sum
//// left ka size 0 hai toh ya left ke top se kam hai ele toh push kar do left mein 
//// nhi toh right mein push karo
//con 2
////left ka size bada hai right + 1 mtlb ek ke diff se farak nhi padta toh right mein push karo left ke top ko
////aur left se pop kar do aur vice versa
//findMedian
////last mein jab left ka size right ke size ke equal hai toh dono ke top ko + karke / 2 kar do
//// nhi toh jisme mein bhi jyada ele ments hai usme uska top median hoga 
/// hard question hai yaad rakho concep samjhii.... gadhiiii