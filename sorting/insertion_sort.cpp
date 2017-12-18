/*
                  Algorithm : Insertion sorting
                  Inplace sorting algorithm
                  Time complexity : O(n*2)
                  Stable Algorithm                                          */

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

vector<int>& InsertionSort(vector<int> &arr){
  int n = arr.size();
  for(int i = 1; i < n; i++ ){
    for(int j = i; j > 0 ; j-- ){ // error
      if(arr[j] > arr[j-1]){
        int tmp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = tmp;
      }else{
        break;
      }
    }
  }
  return arr;
}
int main(){
  int n;
  cin >> n;
  vector<int> arr;
  while( n > 0){
    int element;
    cin >> element;
    arr.push_back(element);
    n--;
  }
  InsertionSort(arr);
  for(int i = 0; i < arr.size() ; i++){
    cout << arr[i] << " ";
  }
  cout << " " << endl;
}
