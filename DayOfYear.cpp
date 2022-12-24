class Solution {
public:
    int dayOfYear(string date) {
        vector<int> v={31,28,31,30,31,30,31,31,30,31,30,31};        

        int y=0;
        for(int i=0;i<4;i++)
            y=10*y + date[i]-'0';             
        int m=0;
        for(int i=5;i<7;i++)
            m=10*m +date[i]-'0';         
        int d=0;
        for(int i=8;i<10;i++)
            d=d*10+date[i]-'0';       
        int day=0;                        
        if(m==1 || m==2)                 
            return m==1?d:(d+31);          

        int flag=0;
        for(int i=0;i<m-1;i++)                 

                day+=v[i];
        
       
        day+=d;                                   

        if(checkleap(y)){
            flag=1;
            return day+1;    
        }
        else
            return day;
			
        return day;
    }
	
	
    bool checkleap(int y){
            if(y%400==0)
                return true;
            if(y%100==0)
                return false;
            if(y%4==0)
                return true;
            return false;
    }
};