#include <iostream> 
using namespace std ;

int input(int fyi,int twi,int teni){
	int sum =0 ;
	int fh =0 ;
	int hd =0 ;
	int fy =0 ;
	int te= 0 ;	
	do{
	cout<<"500���T��:" ;
	cin >>fh ;
	cout<<"100���T��:" ;
	cin >>hd;
	cout<<"50���T��:" ;
	cin >>fy;
	cout<<"10���T��:" ;
	cin >>te;
	sum = 500*fh + 100*hd + 50* fy +10*te ;
	if(sum>50*fyi+20*twi+10*teni){
		cout<<"���������s�q�����A�Э��s��J�C"<<endl ;
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
		cout<<"50���w���Ѿl�ƶq:"<<fifty<<"�T"<<endl ;
	    cout<<"20���w���Ѿl�ƶq:"<<twenty<<"�T"<<endl ;
		cout<<"10���w���Ѿl�ƶq:"<<ten<<"�T"<<endl ;  
		cout<<"----------------------------------"<<endl ; 
		cout<<"�Ч�J���B"<<endl ;
	    ip = input(fifty,twenty,ten) ;
	    cout<<"�@��J"<<ip<<"��"<<endl ; 
	    if(ip/50>fifty){
			cout<<"�I��"<<fifty<<"�T50���C"<<endl ;
			ip=ip-50*fifty ;			
			fifty=0 ;	    	
		}
		else{
			cout<<"�I��"<<ip/50<<"�T50���C"<<endl ;
			fifty=fifty-ip/50 ; 
			ip=ip%50 ;			
		}
	    if(ip/20>twenty){
			cout<<"�I��"<<twenty<<"�T20���C"<<endl ;
			ip=ip-20*twenty ;			
			twenty=0 ;
		}
		else{
			cout<<"�I��"<<ip/20<<"�T20���C"<<endl ;
			twenty=twenty-ip/20 ; 
			ip=ip%20 ;
		}
	    if(ip==0){
			cout<<"�I��0�T10���C"<<endl ;
		}
	    if(ip/10>ten&&ip!=0){
	    	cout<<"error"<<endl ;
		}
		else{
		cout<<"�I��"<<ip/10<<"�T10���C"<<endl ;
		ten=ten-ip/10 ;
	    }
    };

}
