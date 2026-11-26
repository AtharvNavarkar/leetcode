class Solution {
public:
    bool canAliceWin(int n) {
        int count = 0;
        int a = 10;
        while(n >= a){
            count++;
            n = n - a;
            a--;
        }
        if(count%2 == 0){
            return false;
        }else{
            return true;
        }
    }
};