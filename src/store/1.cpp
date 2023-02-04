
 #include <bits/stdc++.h>
 using namespace std;


 int main()  {

   vector <int > nums = {4,-2,-3,4,1} ;
    queue< int > q ; int ans = 0 , int prev, maxi,mini, cnt ;
                for(int i=0; i< nums.size();i++) {
                      q.push(nums[i]) ;
                }
                while(!q.empty()) {
                      cnt =  q.size() ;   maxi = q.front();
                         mini = q.front() ; 
                       
                          q.pop() ;
                     while(cnt>0) {
                           prev = q.front() ;
                          maxi = max(maxi, prev) ;
                          mini = min(mini, prev) ;
                         if(!q.empty()) q.pop() ;
                         ans += (maxi - mini) ;
                        cnt-- ;
                        q.push(prev) ;
                     }
                 
                }
        cout << ans ;

    return  0 ;
 }