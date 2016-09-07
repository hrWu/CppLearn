#include <iostream>
#include <cstring>

using namespace std;
class Array2{
    private:
        int row;
        int col;
        int *arr;
    public:
    ~Array2(){
        if(arr)
            delete [] arr;
    };
    Array2(int r=0, int c=0):row(r),col(c){
       arr = new int[r*c];
    }
    int * operator[](int k){//重載[]
        return (arr+col*k);
    }

    int operator()(int i, int j){//針對cout << a(i,j)
        return arr[col*i + j];
    }

    Array2 & operator=(const Array2 & ary){//Array2 = Array2
        arr = new int[ary.row*ary.col];
        col = ary.col;
        row = ary.row;
        memcpy(arr,ary.arr,sizeof(int)*(col*row));
        return *this;
    }
};


int main() {
    Array2 a(3,4);
    int i,j;
    for(  i = 0;i < 3; ++i )
        for(  j = 0; j < 4; j ++ )
            a[i][j] = i * 4 + j;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;     b = a;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}
