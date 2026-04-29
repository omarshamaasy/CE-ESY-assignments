#include <stdio.h>
#include <string.h>

#define SIZE 20

char buffer[SIZE];
int head = 0;
int tail =0;
int count = 0;

//القيم الابتدائية للمخزن
void init(){
    head = 0;
    tail= 0 ;
    count = 0;
}

// فحص اذا المحزن ممتلئ
int isFull (){
    return count == SIZE ;
} 

//فحص المخزن اذا فاضي
int isEmpty () {
    return count == 0;
}

//الكتابة في المخزن
void write(char data) {
    if (isFull()) {
        printf ("Buffer overFlow! cant add '%c' \n",data);
        return;
    }
    buffer[tail] = data;
    tail = (tail + 1 ) % SIZE ;
    count ++ ;
}

//القراءة من المخزن
char read() {
    if (isEmpty()) {
        printf ("Buffer UnderFlow! the buffer is Empty");
        return 0;
    }
    char data = buffer[head];
    head = (head + 1) % SIZE;
    count -- ;
    return data;
}

int main() {
    init();
    
    char name[100];
    printf ("Enter your name : ");
    scanf ("%99s",name);
    
    strcat(name ," CE-ESY");// اضافة اللاحقة المطلوبة 
    
    printf ("\n The full text is : %s \n",name);
    printf ("text size = %d \n",SIZE);
    printf ("text length = %lu \n",strlen(name));
    
    //كتابة كل حرف في المخزن
    printf ("write every letter in buffer");
    for (int i =0 ;i<strlen(name);i++){
        write(name[i]);
    }
    
    //قراءة وطباعة المحتوى
    printf ("\nRead from buffer : \n");
    while (!isEmpty()){
        char c = read();
        printf ("%c",c);
    }
    printf("\n");
    //التأكد اذا المخزن فاضي 
    if(isEmpty()){
        printf("\nThe buffer is empty \n");
    }else{
        printf("\nThe buffer is not empty \n");
    }
    
    return 0;
}
