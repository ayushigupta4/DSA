#include<iostream>
using namespace std;

int main() {
    int nums[6] = {1,7,3,6,5,6};
    int n = 6;

    int start = 0;
        int end = n -1;
        int mid = start + (end-start)/2;

        while(mid>-1 && mid<n) {
            int lsum=0, rsum=0;
            for(int i=start; i<mid;i++)
                lsum = lsum + nums[i];
            for(int i=mid+1; i<=end; i++)
                rsum = rsum + nums[i];

            if(lsum==rsum){
                cout << mid;
                return 0;;
            }
            else if(lsum>rsum) {
                mid--;
            }
            else{
                mid++;
            }
        }


        cout << mid;
    

}