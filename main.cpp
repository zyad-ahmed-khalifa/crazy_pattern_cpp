#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int counter=0, i, k;
    char arr[27] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    for ( i=0;i<num;i++){

        for (int j=0;j<=i;j++){
            if (counter %2 ==0){
                cout << arr[counter];
            }else{
                cout << char(arr[counter] + 32);
            }
            counter ++;
        }
        if (i!=num-1){
            cout << "\n";
        }
    }
    return 0;
}
