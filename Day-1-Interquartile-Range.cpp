#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{
    int n, i, j, k, m=0, sum=0 ;
    double q1, q2 ;
	cin >> n ;
	int a[n], b[n] ;
	 
	for(i=0 ; i<n ; i++)
        cin >> a[i] ;
	     
	for(j=0 ; j<n ; j++)
	    cin >> b[j] ;
	
	for(j=0 ; j<n ; j++)
	    sum += b[j] ;
	
	int c[sum] ;
	
	for(i=0 ; i<n ; i++)
	{
		j = i ;
		k=0 ;
		while(k < b[j])
		{
		    c[m] = a[i] ;
		    k++ ;
		    m++ ;
		}
	}
  
    // Sort the array 
    sort(c, c+sum) ; 
    
    int c1[(sum/2)], c2[(sum/2)] ;
    
    //cout << "\nLower half :- " ;
    for(i=0 ; i<(sum/2) ; i++)
    {
    	c1[i] = c[i] ;
	}
    
    //cout << "Upper half :- " ;
    for(i=0 ; i<(sum/2) ; i++)
    {
    	c2[i] =  c[(sum/2)+i] ;
	}
    
    int size1 = sizeof(c1)/sizeof(c1[0]) ;
    int size2 = sizeof(c2)/sizeof(c2[0]) ;
    
    q1 = (c1[((size1/2)-1)] + c1[((size1/2)+1)])/2 ;
    q2 = (c2[((size2/2)-1)] + c2[((size2/2)+1)])/2 ;

    cout << fixed << setprecision(1) << q2-q1 ;
  
    return 0; 
} 
