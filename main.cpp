#include <iostream>

using namespace std;

void sortOddEven(int arr[]){

    int tmp = 0;
    int head = 0;
    int tail = 9; //n-1

    while(tmp<=tail){

        //cout<<"e"<<endl;
        if(arr[tmp]%2==1){ //odd

            tmp++;
            head++;
        }
        else{ //even

            swap(arr[tmp],arr[tail]);

            //cout<<"swap";

            tail--;
        }
    }
}
int main()
{
    int arr[10] = {4,2,7,3,0,1,6,8,5,9}; //n = 10

    sortOddEven(arr);

    for(int i=0; i<10; i++){

        cout<<arr[i]<<" ";
    }

    return 0;
}

