class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0) {
            return false;
        }

        bool stillHasNumbers = true;
        vector<int> numberXAsVector;
        int processedNumber = x;


        while(stillHasNumbers){
            if(processedNumber > 0){
                numberXAsVector.push_back(processedNumber % 10);
                processedNumber /= 10;               
            } else {
                stillHasNumbers = false;
            }
        }

        

        while(numberXAsVector.size() > 1){

            if(numberXAsVector.front() != numberXAsVector.back()){
                return false;
            }

            numberXAsVector.erase(numberXAsVector.begin());
            numberXAsVector.erase(numberXAsVector.end());

             
        }

        return true;
        
    }
};