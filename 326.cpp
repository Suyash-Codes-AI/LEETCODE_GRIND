
class Solution {
public:
    bool isPowerOfThree(int n) {

        //base case

        if(n ==1)return true;
        if(n<=0 || n%3 !=0) return false;
        return isPowerOfThree(n/3);
    }
};
SC = O(logN)
TC = O(log N wuth base 3)
/*Each recursive call does one division and modulo (O(1) operations).

At every step, n is divided by 3.

Number of recursive calls = log₃(n)

Depth of recursion = number of divisions = log₃(n)
SC=O(log3​n)≈O(logn)/*



// another way 

maximum power of int range is 3^19 = 1162261467

//BRUTE FORCE 
return n>0 && 1162261467 % n ==0;
}
};
iski SC=TC= O(n)
