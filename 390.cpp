class Solution {
public:
    int lastRemaining(int n) {
        int head = 1;
        int step = 1;
        bool left = true;
        int remain = n;
        while(remain > 1){
            if(left || remain % 2 ==1){
                head +=step;
            }
            remain /=2;
            step *=2;
            left = !left;
        }
        return head;
        
    }
};

//SC = O(1)
//TC = O(logN)
