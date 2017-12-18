/*
                  Algorithm : Heap Sort
                  Inplace sorting algorithm
                  Time complexity : O(n*2)
                  Not Stable Algorithm                                          */

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
vector<int>& MaxHeapify( vector<int> &arr, int pos){

}

vector<int>& HeapSort(vector<int> &arr){
  int n = arr.size();
  for(int i = n-1;i >= 0; i++){

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
  HeapSort(arr);
  for(int i = 0; i < arr.size() ; i++){
    cout << arr[i] << " ";
  }
  cout << " " << endl;
}
