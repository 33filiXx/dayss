#include <unistd.h>
void ft_print_number(){

int i = 0 ;
while(i <= 9 ){
write(1 , &i ,1) ;
i++ ;


}

}
int main(){
ft_print_number();

}
