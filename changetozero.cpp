#include <iostream> 
using namespace std ;

int input(int fyi,int twi,int teni){
	int sum =0 ;
	int fh =0 ;
	int hd =0 ;
	int fy =0 ;
	int te= 0 ;	
	do{
	cout<<"500じ猅计:" ;
	cin >>fh ;
	cout<<"100じ猅计:" ;
	cin >>hd;
	cout<<"50じ猅计:" ;
	cin >>fy;
	cout<<"10じ猅计:" ;
	cin >>te;
	sum = 500*fh + 100*hd + 50* fy +10*te ;
	if(sum>50*fyi+20*twi+10*teni){
		cout<<"セ诀窥秖ぃì叫穝щ"<<endl ;
		continue ;
	}
	else
	   return sum ;
    }while(sum>50*fyi+20*twi+10*teni) ;
}
    

int main(){
	int ip;
	int fifty = 100 ;
	int twenty = 100 ;
	int ten = 500 ;
	while(fifty>0||twenty>0||ten>0){
		cout<<"----------------------------------"<<endl ;
		cout<<"50じ祑刽逞緇计秖:"<<fifty<<"猅"<<endl ;
	    cout<<"20じ祑刽逞緇计秖:"<<twenty<<"猅"<<endl ;
		cout<<"10じ祑刽逞緇计秖:"<<ten<<"猅"<<endl ;  
		cout<<"----------------------------------"<<endl ; 
		cout<<"叫щ肂"<<endl ;
	    ip = input(fifty,twenty,ten) ;
	    cout<<"щ"<<ip<<"じ"<<endl ; 
	    if(ip/50>fifty){
			cout<<"传"<<fifty<<"猅50じ"<<endl ;
			ip=ip-50*fifty ;			
			fifty=0 ;	    	
		}
		else{
			cout<<"传"<<ip/50<<"猅50じ"<<endl ;
			fifty=fifty-ip/50 ; 
			ip=ip%50 ;			
		}
	    if(ip/20>twenty){
			cout<<"传"<<twenty<<"猅20じ"<<endl ;
			ip=ip-20*twenty ;			
			twenty=0 ;
		}
		else{
			cout<<"传"<<ip/20<<"猅20じ"<<endl ;
			twenty=twenty-ip/20 ; 
			ip=ip%20 ;
		}
	    if(ip==0){
			cout<<"传0猅10じ"<<endl ;
		}
	    if(ip/10>ten&&ip!=0){
	    	cout<<"error"<<endl ;
		}
		else{
		cout<<"传"<<ip/10<<"猅10じ"<<endl ;
		ten=ten-ip/10 ;
	    }
    };

}
