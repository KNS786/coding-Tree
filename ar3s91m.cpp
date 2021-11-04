int Solution::solve(vector<int> &A, int B) {
    int first=0,last=A.size()-1,b=0;
    int sum=0,max;
    while(b >= B ){
       if( A[first] < A[ last]){
           max=A[first];
           first++;
       }else{
          max=A[last];
          last--;
       }
       sum+=max;
       b++;

    }
  return sum;
}

