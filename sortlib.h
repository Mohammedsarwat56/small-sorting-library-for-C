              /*  
              this library contain 14 sorting algorithm from basic ones (bubble sort , insertion sort....) 
              to advanced ones (TIM sort (not fully) , Quick sort ,merge sort)
              
              how to setup : 

              put the library file in your project
              include both declarations and IMPLEMENTATIONs in your source file :

              #define SORTLIB_IMPLEMENTATION        this necessary for IMPLEMENTATIONs  
              #include "sortlib.h"                  then inlcude the whole library 

              #define SORTLIB_IMPLEMENTATION must come before #include "sortlib.h" in your source file
              
              */


#ifndef SORTLIB_H
#define SORTLIB_H

#include <stdio.h>
#include <stdbool.h>

typedef char* string;              /*
                                   NOTE : in this library all the strings are string literal ex, char* 
                                   so the array of strings  you pass ,it must be  an array of string literal  ex, char* MYstrings[]
                                   */  



//         <----set of functions Calls---->

// after setting up the library you can call these functions (be careful for the parameters) these will do the sorting

void Bubble_sort_int(int numbersIntData[],int length);
void Bubble_sort_float(float numbersFloatData[],int length);
void Bubble_sort_char(char charsData[],int length);
void Bubble_sort_string(string stringsData[],int length);

void Selection_sort_int(int numbersIntData[],int length);
void Selection_sort_float(float numbersFloatData[],int length);
void Selection_sort_char(char charsData[],int length);
void Selection_sort_string(string stringSData[],int length);

void Insertion_sort_int(int numbersIntData[],int length);
void Insertion_sort_float(float numbersFloatData[],int length);
void Insertion_sort_char(char charsData[],int length);
void Insertion_sort_string(string stringsData[],int length);

void Gnome_sort_int(int numbersIntData[],int length);
void Gnome_sort_float(float numbersFloatData[],int length);
void Gnome_sort_char(char CharsData[],int length);
void Gnome_sort_string(string StringsData[],int length);

void Shaker_sort_int(float numbersIntData[],int length);
void Shaker_sort_float(float numbersFloatData[],int length);
void Shaker_sort_char(char CharsData[],int length);
void Shaker_sort_string(string StringsData[],int length);

void Comb_sort_int(int numbersIntData[], int length);
void Comb_sort_float(float numbersFloatData[],int length);
void Comb_sort_char(char CharsData[],int length);
void Comb_sort_string(string StringsData[],int length);

void OddEven_sort_int(int numbersIntData[] ,int length);
void OddEven_sort_float(float numbersFloatData[], int length);
void OddEven_sort_char(char CharsData[],int length);
void OddEven_sort_string(string StringsData[],int length);

void Pancake_sort_int(int numbersIntData[],int length);
void Pancake_sort_float(float numbersFloatData[],int length);
void Pancake_sort_char(char CharsData[],int length);
void Pancake_sort_string(string StringsData[],int length);

void Stooge_sort_int(int numbersIntData[],int lowest_INDEX,int Highest_INDEX);
void Stooge_sort_float(float numbersFloatData[],int lowest_INDEX,int Highest_INDEX);
void Stooge_sort_char(char CharsData[],int lowest_INDEX,int Highest_INDEX);
void Stooge_sort_string(string StringsData[],int lowest_INDEX,int Highest_INDEX);

void Shell_sort_int(int numbersIntData[] , int length);
void Shell_sort_float(float numbersFloattData[] , int length);
void Shell_sort_char(char CharsData[],int length);
void Shell_sort_string(string StringsData[],int length);

void Merge_sort_int(int numbersIntData[],int length);
void Merge_sort_float(float numbersFloatData[],int length);
void Merge_sort_char(char CharsData[],int length);
void Merge_sort_string(string StringsData[],int length);

void Quick_sort_int(int numbersIntData[],int start_Index,int end_Index);
void Quick_sort_float(float numbersFloatData[],int start_Index,int end_Index);
void Quick_sort_char(char CharsData[],int start_Index,int end_Index);
void Quick_sort_string(string StringsData[],int start_Index,int end_Index);

void Binary_insertion_sort_int(int numbersIntData[],int length);
void Binary_insertion_sort_float(float numbersFloatData[],int length);
void Binary_insertion_sort_char(char charsData[], int length );
void Binary_insertion_sort_string(string stringsData[], int length);

void Tim_sort_int(int numbersIntData[],int length);
void Tim_sort_float(float numbersFloatData[],int length);
void Tim_sort_char(char charsData[],int length);
void Tim_sort_string(string stringsData[],int length);


#ifdef SORTLIB_IMPLEMENTATION

//+++++++++++++++++++++++++++++++++++++++++++++++++BUBBLE SORT++++++++++++++++++++++++++++++++++++++++++++++

void Bubble_sort_int(int numbersIntData[],int length){

       for(int i=0;i<length;i++){
              for(int j=0;j<length - i -1;j++){
                     if(numbersIntData[j]>numbersIntData[j+1]){
                            int TEMP_INT =numbersIntData[j];
                            numbersIntData[j]=numbersIntData[j+1];
                            numbersIntData[j+1]=TEMP_INT;
                     }
              }
       }
} 

void Bubble_sort_float(float numbersFloatData[],int length){

       for(int i=0;i<length;i++){
              for(int j=0;j<length- i- 1;j++){
                     if(numbersFloatData[j]>numbersFloatData[j+1]){
                            float TEMP_FLOAT=numbersFloatData[j];
                            numbersFloatData[j]=numbersFloatData[j+1];
                            numbersFloatData[j+1]=TEMP_FLOAT;
                     }
              }
       }
}

void Bubble_sort_char(char charsData[],int length){

       for(int i=0;i<length;i++){
              for(int j=0;j<length- i -1;j++){
                     if(charsData[j]>charsData[j+1]){
                            int TEMP_CHAR =charsData[j];
                            charsData[j]=charsData[j+1];
                            charsData[j+1]=TEMP_CHAR;
                     }
              }
       }
}  

void Bubble_sort_string(string stringsData[],int length){

       for(int i=0;i<length;i++){
              for(int j=0;j<length- i -1;j++){
                     if(*stringsData[j] > *stringsData[j+1] ){
                            string TEMP_string =stringsData[j];
                            stringsData[j]=stringsData[j+1];
                            stringsData[j+1]=TEMP_string;
                     }
              }
       }
} 

//+++++++++++++++++++++++++++++++++++++++++++++++++SELECTION SORT++++++++++++++++++++++++++++++++++++++++++++

void Selection_sort_int(int numbersIntData[],int length){
        
       int min=0;
       for(int i=0;i<length;i++){
              min=i;
              for(int j=i+1;j<length;j++){
                     if(numbersIntData[min]>numbersIntData[j]){
                            min=j;
                     }
              }

              int TEMP_INT=numbersIntData[i];
              numbersIntData[i]=numbersIntData[min];
              numbersIntData[min]=TEMP_INT;
              
       }
}

void Selection_sort_float(float numbersFloatData[],int length){
        
       int min=0;
       for(int i=0;i<length;i++){
              min=i;
              for(int j=i+1;j<length;j++){
                     if(numbersFloatData[min]>numbersFloatData[j]){
                            min=j;
                     }
              }

              float TEMP_FLOAT=numbersFloatData[i];
              numbersFloatData[i]=numbersFloatData[min];
              numbersFloatData[min]=TEMP_FLOAT;
              
       }
}

void Selection_sort_char(char charsData[],int length){
        
       int min=0;
       for(int i=0;i<length;i++){
              min=i;
              for(int j=i+1;j<length;j++){
                     if(charsData[min]>charsData[j]){
                            min=j;
                     }
              }

              char TEMP_CHAR=charsData[i];
              charsData[i]=charsData[min];
              charsData[min]=TEMP_CHAR;
              
       }
}

void Selection_sort_string(string stringSData[],int length){
        
       int min=0;
       for(int i=0;i<length;i++){
              min=i;
              for(int j=i+1;j<length;j++){
                     if(*stringSData[min]>*stringSData[j]){
                            min=j;
                     }
              }

              string TEMP_STRING=stringSData[i];
              stringSData[i]=stringSData[min];
              stringSData[min]=TEMP_STRING;
              
       }
}

//+++++++++++++++++++++++++++++++++++++++++++++++++INSERTION SORT++++++++++++++++++++++++++++++++++++++++++++

void Insertion_sort_int(int numbersIntData[],int length){

              int TEMP_INT=0;
              int J=0;

              for(int i=1;i<length;i++){

                     TEMP_INT=numbersIntData[i];
                     J=i-1; 
                     
                     while(J>=0 && numbersIntData[J]>TEMP_INT){
                            numbersIntData[J+1]=numbersIntData[J];
                            J--;
                     }
                     numbersIntData[J+1]=TEMP_INT;       
              }
       }

void Insertion_sort_float(float numbersFloatData[],int length){

              float TEMP_FLOAT=0;
              int J=0;
              for(int i=1;i<length;i++){
                     TEMP_FLOAT=numbersFloatData[i];
                     J=i-1; 
                     while(J>=0 && numbersFloatData[J]>TEMP_FLOAT){
                            numbersFloatData[J+1]=numbersFloatData[J];
                            J--;
                     }
                     numbersFloatData[J+1]=TEMP_FLOAT;       
              }
       }

void Insertion_sort_char(char charsData[],int length){

              char TEMP_CHAR='\0';
              int J=0;

              for(int i=1;i<length;i++){

                     TEMP_CHAR=charsData[i];
                     J=i-1;

                     while(J>=0 && charsData[J]>TEMP_CHAR){
                            charsData[J+1]=charsData[J];
                            J--;
                     }
                     charsData[J+1]=TEMP_CHAR;
              }
 }

void Insertion_sort_string(string stringsData[],int length){

       string TEMP_STRING="";
       int J=0;

       for(int i=1;i<length;i++){

              TEMP_STRING=stringsData[i];
              J=i-1;

              while(J>=0 && *stringsData[J]>*TEMP_STRING){
                     stringsData[J+1]=stringsData[J];
                     J--;
              }
               stringsData[J+1]=TEMP_STRING;
       }
 }

//+++++++++++++++++++++++++++++++++++++++++++++++++GNOME SORT+++++++++++++++++++++++++++++++++++++++++++++++

void Gnome_sort_int(int numbersIntData[],int length){

   int i=0;

   while(i < length)

   if(i==0 || numbersIntData[i]>numbersIntData[i-1]){
       i++;
   }

   else{

       int TEMP_int=numbersIntData[i];                //swap
       numbersIntData[i]=numbersIntData[i-1];
       numbersIntData[i-1]=TEMP_int;
       i--;
   }

}

void Gnome_sort_float(float numbersFloatData[],int length){

   int i=0;

   while(i < length){

       if(i==0 || numbersFloatData[i]>numbersFloatData[i-1]){
              i++;
       }
       else{
              float TEMP_float=numbersFloatData[i];                //swap
              numbersFloatData[i]=numbersFloatData[i-1];
              numbersFloatData[i-1]=TEMP_float;
              i--;
       }

   }

}

void Gnome_sort_char(char CharsData[],int length){

   int i=0;

   while(i < length){

       if(i==0 || CharsData[i]>CharsData[i-1]){
              i++;
       }
       else{
              char TEMP_char=CharsData[i];           //swap
              CharsData[i]=CharsData[i-1];
              CharsData[i-1]=TEMP_char;
              i--;
       }
   }

}

void Gnome_sort_string(string StringsData[],int length){

       int i=0;

       while(i < length){

              if(i==0 || *StringsData[i] > *StringsData[i-1]){

                     i++;

              }
              else{
                     string TEMP_string=StringsData[i];         //swap
                     StringsData[i]=StringsData[i-1];
                     StringsData[i-1]=TEMP_string;
                     i--;
              }

       }

}

//+++++++++++++++++++++++++++++++++SHAKER SORT -known as cocktail shaker sort-++++++++++++++++++++++++++++++

void Shaker_sort_int(float numbersIntData[],int length){ 


       int end_Index=length-1, start_Index=0;

       bool done_Swapping_Flag=1;          // flag to indicate that the swapping happend

       for(int i=0; i < length ; i++ ){

              done_Swapping_Flag=0;

              for(int Forward_sorting = start_Index ; Forward_sorting < end_Index  ; Forward_sorting++){

                     if( numbersIntData[Forward_sorting] > numbersIntData[Forward_sorting+1] ){

                            int TEMP_int = numbersIntData[Forward_sorting];                          //swappping
                            numbersIntData[Forward_sorting] = numbersIntData[Forward_sorting+1];
                            numbersIntData[Forward_sorting+1]=TEMP_int;

                            done_Swapping_Flag=1;                            // flag to indicate that the swapping happend
                     }
              }

              end_Index--;

              if(!done_Swapping_Flag) break;     //terminate the loop if no more iterations (no more sorting) needed

              for(int Backward_sorting = end_Index ; Backward_sorting > start_Index ; Backward_sorting--){

                     if( numbersIntData[Backward_sorting] < numbersIntData[Backward_sorting-1]){

                            int TEMP_int = numbersIntData[Backward_sorting];                               //swapping
                            numbersIntData[Backward_sorting] = numbersIntData[Backward_sorting-1];
                            numbersIntData[Backward_sorting-1] = TEMP_int;

                            done_Swapping_Flag=1;                             // flag to indicate that the swapping happend
                     }
              }

              start_Index++;
       }
}

void Shaker_sort_float(float numbersFloatData[],int length){

       int end_Index=length-1, start_Index=0;

       bool done_Swapping_Flag=1;     // flag to indicate that the swapping happend

       for(int i=0 ; i < length;i++){

            done_Swapping_Flag=0;
            
            for(int Forward_sorting=start_Index ; Forward_sorting < end_Index ; Forward_sorting++){

                     if( numbersFloatData[Forward_sorting] > numbersFloatData[Forward_sorting+1] ){

                            float TEMP_float = numbersFloatData[Forward_sorting];                          //swapping
                            numbersFloatData[Forward_sorting] = numbersFloatData[Forward_sorting+1];
                            numbersFloatData[Forward_sorting+1] = TEMP_float;

                            done_Swapping_Flag=1;             // flag to indicate that swapping happend
                     }
               }

              end_Index--;

              if(!done_Swapping_Flag) break;

              for(int Backward_sorting = end_Index ; Backward_sorting > start_Index ; Backward_sorting-- ){

                     if( numbersFloatData[Backward_sorting] < numbersFloatData[Backward_sorting-1]){

                            float TEMP_float = numbersFloatData[Backward_sorting];
                            numbersFloatData[Backward_sorting] = numbersFloatData[Backward_sorting-1];
                            numbersFloatData[Backward_sorting-1] = TEMP_float;

                            done_Swapping_Flag=1;             // flag to indicate that swapping happend
                     }
              }

              start_Index++;
       }

}

void Shaker_sort_char(char CharsData[],int length){

       int end_Index = length-1, start_Index = 0;

       bool done_Swapping_Flag = 1;          // flag to indicate that the swapping happend

       for(int i=0; i < length ; i++){

              done_Swapping_Flag=0;

              for(int Forward_sorting=start_Index ; Forward_sorting < end_Index ;Forward_sorting++){

                     if( CharsData[Forward_sorting] > CharsData[Forward_sorting+1] ){

                            char TEMP_char = CharsData[Forward_sorting];                   //swapping
                            CharsData[Forward_sorting] = CharsData[Forward_sorting+1];
                            CharsData[Forward_sorting+1] = TEMP_char;

                            done_Swapping_Flag=1;             // flag to indicate that swapping happend
                     }
                     
              }

              end_Index--;

              if( !done_Swapping_Flag ) break;

               for(int Backward_sorting = end_Index; Backward_sorting > start_Index ; Backward_sorting-- ){

                     if( CharsData[Backward_sorting] < CharsData[Backward_sorting-1] ){

                            char TEMP_char = CharsData[Backward_sorting-1];                //swapping
                            CharsData[Backward_sorting-1] = CharsData[Backward_sorting];
                            CharsData[Backward_sorting] = TEMP_char;

                            done_Swapping_Flag=1;       // flag to indicate that swapping happend
                       }
               }

              start_Index++;
       }

}

void Shaker_sort_string(string StringsData[],int length){

       int end_Index=length-1, start_Index=0;

       bool done_Swapping_Flag=1;          // flag to indicate that the swapping happend

       for(int i = 0; i < length ; i++ ){


              done_Swapping_Flag=0;

              for(int Forward_sorting = start_Index ; Forward_sorting < end_Index ; Forward_sorting++ ){

                     if( *StringsData[Forward_sorting] > *StringsData[Forward_sorting+1] ){

                            string TEMP_string = StringsData[Forward_sorting];                    //swapping
                            StringsData[Forward_sorting] = StringsData[Forward_sorting+1];
                            StringsData[Forward_sorting+1] = TEMP_string;

                            done_Swapping_Flag=1;                         // flag to indicate that the swapping happend
                     }
              }

              if(!done_Swapping_Flag) break;

              end_Index--;

              for( int Backward_sorting = end_Index ; Backward_sorting > start_Index ; Backward_sorting--){

                     if( *StringsData[Backward_sorting] < *StringsData[Backward_sorting-1]){

                            string TEMP_string = StringsData[Backward_sorting];                    //swapping
                            StringsData[Backward_sorting] = StringsData[Backward_sorting-1];
                            StringsData[Backward_sorting-1] = TEMP_string;

                            done_Swapping_Flag=1;                         // flag to indicate that the swapping happend
                     }

              }

              start_Index++;
       }
}

//+++++++++++++++++++++++++++++++++++++++++++++++++COMB SORT+++++++++++++++++++++++++++++++++++++++++++++++

void Comb_sort_int(int numbersIntData[], int length){

       int Gap = length,TEMP_int = 0;
       float Shrink_Factor = 1.3f;
       bool done_swapping_Flag=1;

       while( Gap > 1 || done_swapping_Flag ){

              done_swapping_Flag=0;
              Gap=Gap/Shrink_Factor;

              if(Gap < 1 )  Gap = 1 ; 
              

              for(int i=0; i< length - Gap ; i++ ){

                     if( numbersIntData[i] > numbersIntData[i+Gap] ){

                             TEMP_int = numbersIntData[i];
                            numbersIntData[i] = numbersIntData[i+Gap];
                            numbersIntData[i+Gap] = TEMP_int;
                            done_swapping_Flag = 1;

                     }

              }

       }

}

void Comb_sort_float(float numbersFloatData[],int length){

     int Gap = length;
     bool done_swapping_Flag=1;

     float TEMP_float = 0.0f,
     Shrink_Factor = 1.3f;
     
     while( Gap > 1 || done_swapping_Flag ){

       done_swapping_Flag = 0;
       Gap = Gap / Shrink_Factor;

       if( Gap < 1) Gap = 1;

       for( int i=0; i < length-Gap; i++ ){

              if( numbersFloatData[i] > numbersFloatData[i+Gap] ){

                     TEMP_float = numbersFloatData[i];
                     numbersFloatData[i] = numbersFloatData[i+Gap];
                     numbersFloatData[i+Gap] = TEMP_float;
                     done_swapping_Flag = 1;
              }

       }

   }  

}

void Comb_sort_char(char CharsData[],int length){

       int Gap = length;
       bool done_swapping_Flag=1;
       char TEMP_char='\0';
       float Shrink_Factor=1.3f;

       while( Gap > 1 || done_swapping_Flag ){

              done_swapping_Flag = 0;
              Gap = Gap/Shrink_Factor ;

              if( Gap < 1 ) Gap = 1 ;

              for( int i = 0 ; i < length-Gap ; i++ ){

                     if( CharsData[i] > CharsData[i+Gap] ){

                            TEMP_char = CharsData[i];
                            CharsData[i] = CharsData[i+Gap];
                            CharsData[i+Gap] = TEMP_char;
                            done_swapping_Flag = 1;
                     }
              }
       }
}

void Comb_sort_string(string StringsData[],int length){

       string TEMP_string = "";
       int Gap = length;
       bool done_swapping_Flag=1;
       float Shrink_Factor = 1.3f;

       while( Gap > 1 || done_swapping_Flag ){

              done_swapping_Flag = 0;
              Gap = Gap / Shrink_Factor;

              if( Gap < 1) Gap = 1;

              for(int i=0 ; i < length-Gap ; i++){

                     if( *StringsData[i] > *StringsData[i+Gap] ){

                            TEMP_string = StringsData[i];
                            StringsData[i] = StringsData[i+Gap];
                            StringsData[i+Gap] = TEMP_string;
                            done_swapping_Flag = 1;
                     }
                     
              }

       }

}

//+++++++++++++++++++++++++++++++++++++++++++++++++ODD-EVEN SORT++++++++++++++++++++++++++++++++++++++++++++

void OddEven_sort_int(int numbersIntData[] ,int length){

       int TEMP_int = 0 , last_INDEX = length-1;
       bool done_swapping_Flag = 1;

       while( done_swapping_Flag ){

              done_swapping_Flag = 0;

              for(int odd_INDEX = 1; odd_INDEX <= last_INDEX-1 ; odd_INDEX += 2){

                      if( numbersIntData[odd_INDEX] > numbersIntData[odd_INDEX+1] ){

                            TEMP_int = numbersIntData[odd_INDEX];
                            numbersIntData[odd_INDEX] = numbersIntData[odd_INDEX+1];
                            numbersIntData[odd_INDEX+1] = TEMP_int;
                            done_swapping_Flag = 1;
                     }
              }

              for(int even_INDEX = 0 ; even_INDEX <= last_INDEX-1 ; even_INDEX += 2){

                     if( numbersIntData[even_INDEX] > numbersIntData[even_INDEX+1] ){

                            TEMP_int = numbersIntData[even_INDEX];
                            numbersIntData[even_INDEX] = numbersIntData[even_INDEX+1];
                            numbersIntData[even_INDEX+1] = TEMP_int;
                            done_swapping_Flag = 1;
                     }
              }
       }
}

void OddEven_sort_float(float numbersFloatData[], int length){

       float TEMP_float = 0.0f;
       bool done_swapping_Flag = 1;
       int last_INDEX = length-1;

       while( done_swapping_Flag ){

              done_swapping_Flag = 0;

              for(int odd_INDEX = 1; odd_INDEX <= last_INDEX-1; odd_INDEX +=2 ){

                     if(numbersFloatData[odd_INDEX] > numbersFloatData[odd_INDEX+1] ){

                            TEMP_float = numbersFloatData[odd_INDEX];
                            numbersFloatData[odd_INDEX] = numbersFloatData[odd_INDEX+1];
                            numbersFloatData[odd_INDEX+1] = TEMP_float ;
                            done_swapping_Flag = 1;
                     }
              }

              for(int even_INDEX = 0; even_INDEX <= last_INDEX-1; even_INDEX +=2 ){

                     if(numbersFloatData[even_INDEX] > numbersFloatData[even_INDEX+1] ){

                            TEMP_float = numbersFloatData[even_INDEX];
                            numbersFloatData[even_INDEX] = numbersFloatData[even_INDEX+1];
                            numbersFloatData[even_INDEX+1] = TEMP_float ;
                            done_swapping_Flag = 1;
                     }
              }
       }
}

void OddEven_sort_char(char CharsData[],int length){

       char TEMP_char = '\0';
       bool done_swapping_Flag = 1;
       int last_INDEX = length - 1;

       while( done_swapping_Flag ){

              done_swapping_Flag = 0;

              for(int odd_INDEX = 1 ; odd_INDEX <= last_INDEX-1 ; odd_INDEX +=2 ){

                     if(CharsData[odd_INDEX]  > CharsData[odd_INDEX+1]){

                            TEMP_char = CharsData[odd_INDEX];
                            CharsData[odd_INDEX] = CharsData[odd_INDEX+1];
                            CharsData[odd_INDEX+1] = TEMP_char;
                            done_swapping_Flag = 1;
                     }
              }

              for(int even_INDEX = 0 ; even_INDEX <= last_INDEX-1 ; even_INDEX +=2 ){

                     if(CharsData[even_INDEX]  > CharsData[even_INDEX+1]){

                            TEMP_char = CharsData[even_INDEX];
                            CharsData[even_INDEX] = CharsData[even_INDEX+1];
                            CharsData[even_INDEX+1] = TEMP_char;
                            done_swapping_Flag = 1;
                     }
              }
       }
}

void OddEven_sort_string(string StringsData[],int length){

       string TEMP_string="";
       int last_INDEX = length-1;
       bool done_swapping_Flag = 1;

       while( done_swapping_Flag ){

              done_swapping_Flag = 0;

              for(int odd_INDEX = 1; odd_INDEX <= last_INDEX-1 ; odd_INDEX+=2 ){

                     if(*StringsData[odd_INDEX] > *StringsData[odd_INDEX+1]){

                            TEMP_string = StringsData[odd_INDEX];
                            StringsData[odd_INDEX] = StringsData[odd_INDEX+1];
                            StringsData[odd_INDEX+1] = TEMP_string;
                            done_swapping_Flag = 1;
                     }
              }

              for(int even_INDEX = 0; even_INDEX <= last_INDEX-1 ; even_INDEX+=2 ){

                     if(*StringsData[even_INDEX] > *StringsData[even_INDEX+1]){

                            TEMP_string = StringsData[even_INDEX];
                            StringsData[even_INDEX] = StringsData[even_INDEX+1];
                            StringsData[even_INDEX+1] = TEMP_string;
                            done_swapping_Flag = 1;
                     }
              }
       }
}

//+++++++++++++++++++++++++++++++++++++++++++++++++PANCAKE SORT+++++++++++++++++++++++++++++++++++++++++++++

void flip_int(int numbersIntData[],int new_Length);                   //prior call
void flip_float(float numbersFloatData[] , int new_Length);           //prior call
void flip_char(char CharsData[],int new_Length);                      //prior call
void flip_string(string StringsData[],int new_Length);                //prior call


void Pancake_sort_int(int numbersIntData[],int length){

       if(length == 1) return;

       int largest_VALUE_INDEX = 0;
       for(int i=0; i< length;i++){

              if(numbersIntData[i] > numbersIntData[largest_VALUE_INDEX] ) largest_VALUE_INDEX = i;
       }


       if(largest_VALUE_INDEX !=0) flip_int( numbersIntData, largest_VALUE_INDEX);


       flip_int(numbersIntData,length-1);


       Pancake_sort_int(numbersIntData,length-1);
}

void Pancake_sort_float(float numbersFloatData[] , int length){

       if(length == 1) return;

       int largest_VALUE_INDEX = 0;
       for(int i = 0; i < length;i++){

              if(numbersFloatData[i] > numbersFloatData[largest_VALUE_INDEX] ) largest_VALUE_INDEX = i; 

       }

       if(largest_VALUE_INDEX != 0){

              flip_float(numbersFloatData,largest_VALUE_INDEX);

       }

       flip_float(numbersFloatData,length-1);

       Pancake_sort_float(numbersFloatData,length-1);

}

void Pancake_sort_char(char CharsData[],int length){

       if(length == 1) return;

       int largest_VALUE_INDEX=0;
       for(int i=0;i < length;i++){

              if(CharsData[i] > CharsData[largest_VALUE_INDEX])    largest_VALUE_INDEX = i;
              
       }

       if(largest_VALUE_INDEX != 0){

              flip_char(CharsData,largest_VALUE_INDEX);
       }

       flip_char(CharsData,length-1);

       Pancake_sort_char(CharsData,length-1);
}

void Pancake_sort_string(string StringsData[],int length){

       if(length ==1) return;

       int largest_VALUE_INDEX=0;
       for(int i=0;i < length;i++){

              if(*StringsData[i] > *StringsData[largest_VALUE_INDEX]) largest_VALUE_INDEX = i;
       }

       if(largest_VALUE_INDEX != 0){
              flip_string(StringsData,largest_VALUE_INDEX);
       }

       flip_string(StringsData,length-1);

       Pancake_sort_string(StringsData,length-1);
}

       // these functions will flip the array 

void flip_int(int numbersIntData[],int new_Length){

       int start = 0, TEMP_int = 0;

       while( start , new_Length){

              TEMP_int = numbersIntData[new_Length];
              numbersIntData[new_Length] = numbersIntData[start];
              numbersIntData[start] = TEMP_int;

              new_Length--;
              start++;
       }

}

void flip_float(float numbersFloatData[] , int new_Length){

       int start = 0;
       float TEMP_float = 0;
       while(start < new_Length){

              TEMP_float = numbersFloatData[start];
              numbersFloatData[start] = numbersFloatData[new_Length];
              numbersFloatData[new_Length] = TEMP_float;
              start++;
              new_Length--;
       }
}

void flip_char(char CharsData[],int new_Length){

       int start=0;
       char TEMP_char='\0';
       while(start < new_Length){

              TEMP_char = CharsData[start];
              CharsData[start] = CharsData[new_Length];
              CharsData[new_Length] = TEMP_char;
              start++;
              new_Length--;

       }


}

void flip_string(string StringsData[],int new_Length){

       int start=0;
       string TEMP_string="";

       while(start < new_Length){

              TEMP_string = StringsData[start];
              StringsData[start] = StringsData[new_Length];
              StringsData[new_Length] = TEMP_string;
              new_Length--;
              start++;

       }
}

//+++++++++++++++++++++++++++++++++++++++++++++++++STOOGE SORT+++++++++++++++++++++++++++++++++++++++++++++

void Stooge_sort_int(int numbersIntData[],int lowest_INDEX,int Highest_INDEX){

       if(lowest_INDEX >= Highest_INDEX) return;

       int TEMP_int = 0;
       if(numbersIntData[lowest_INDEX] > numbersIntData[Highest_INDEX]){

              TEMP_int = numbersIntData[lowest_INDEX];
              numbersIntData[lowest_INDEX] = numbersIntData[Highest_INDEX];
              numbersIntData[Highest_INDEX] = TEMP_int;
       }

       int init_Value_2_of_3 = 0;
       if( Highest_INDEX - lowest_INDEX +1 > 2 ){

              init_Value_2_of_3= (Highest_INDEX - lowest_INDEX +1)/3;            // get 2/3 size of the array

              // sort the first 2/3 of the array

              Stooge_sort_int(numbersIntData , lowest_INDEX, Highest_INDEX - init_Value_2_of_3);

              // sort the last 2/3 of the array

              Stooge_sort_int(numbersIntData, lowest_INDEX + init_Value_2_of_3 , Highest_INDEX);

              // sort the first 2/3 of the array
              //again

              Stooge_sort_int(numbersIntData , lowest_INDEX, Highest_INDEX - init_Value_2_of_3);

       }

}

void Stooge_sort_float(float numbersFloatData[],int lowest_INDEX,int Highest_INDEX){

       if(lowest_INDEX >= Highest_INDEX) return;

       float TEMP_float=0.0;
       if(numbersFloatData[lowest_INDEX] > numbersFloatData[Highest_INDEX]){

              TEMP_float = numbersFloatData[lowest_INDEX];
              numbersFloatData[lowest_INDEX] = numbersFloatData[Highest_INDEX];
              numbersFloatData[Highest_INDEX] = TEMP_float;
       }

       int init_Value_2_of_3 = 0;
       if( Highest_INDEX - lowest_INDEX +1 > 2 ){

              init_Value_2_of_3= (Highest_INDEX - lowest_INDEX +1)/3;            // get 2/3 size of the array

              // sort the first 2/3 of the array

              Stooge_sort_float(numbersFloatData , lowest_INDEX, Highest_INDEX - init_Value_2_of_3);

              // sort the last 2/3 of the array

              Stooge_sort_float(numbersFloatData, lowest_INDEX + init_Value_2_of_3 , Highest_INDEX);

              // sort the first 2/3 of the array
              //again

              Stooge_sort_float(numbersFloatData , lowest_INDEX, Highest_INDEX - init_Value_2_of_3);

       }

}

void Stooge_sort_char(char CharsData[],int lowest_INDEX,int Highest_INDEX){

       if(lowest_INDEX >= Highest_INDEX) return;

       char TEMP_char = '\0';
       if(CharsData[lowest_INDEX] > CharsData[Highest_INDEX]){

              TEMP_char = CharsData[lowest_INDEX];
              CharsData[lowest_INDEX] = CharsData[Highest_INDEX];
              CharsData[Highest_INDEX] = TEMP_char;
       }

       int init_Value_2_of_3 = 0;
       if( Highest_INDEX - lowest_INDEX +1 > 2 ){

              init_Value_2_of_3= (Highest_INDEX - lowest_INDEX +1)/3;            // get 2/3 size of the array

              // sort the first 2/3 of the array

              Stooge_sort_char(CharsData , lowest_INDEX, Highest_INDEX - init_Value_2_of_3);

              // sort the last 2/3 of the array

              Stooge_sort_char(CharsData, lowest_INDEX + init_Value_2_of_3 , Highest_INDEX);

              // sort the first 2/3 of the array
              //again

              Stooge_sort_char(CharsData , lowest_INDEX, Highest_INDEX - init_Value_2_of_3);

       }

}

void Stooge_sort_string(string StringsData[],int lowest_INDEX,int Highest_INDEX){

       if(lowest_INDEX > Highest_INDEX) return;

       string TEMP_string="";
       if( *StringsData[lowest_INDEX] > *StringsData[Highest_INDEX]){

              TEMP_string = StringsData[lowest_INDEX];
              StringsData[lowest_INDEX] = StringsData[Highest_INDEX];
              StringsData[Highest_INDEX] = TEMP_string;
       }

       int init_Value_2_of_3 = 0;
       if( Highest_INDEX - lowest_INDEX +1 > 2 ){

              init_Value_2_of_3= (Highest_INDEX - lowest_INDEX +1)/3;            // get 2/3 size of the array

              // sort the first 2/3 of the array

              Stooge_sort_string(StringsData , lowest_INDEX, Highest_INDEX - init_Value_2_of_3);

              // sort the last 2/3 of the array

              Stooge_sort_string(StringsData, lowest_INDEX + init_Value_2_of_3 , Highest_INDEX);

              // sort the first 2/3 of the array
              //again

              Stooge_sort_string(StringsData , lowest_INDEX, Highest_INDEX - init_Value_2_of_3);

       }

}

//+++++++++++++++++++++++++++++++++++++++++++++++++SHELL SORT+++++++++++++++++++++++++++++++++++++++++++++++

void Shell_sort_int(int numbersIntData[] , int length){

       int TEMP_int = 0;
       int J = 0;

       for(int Gap = length / 2;Gap > 0; Gap/=2){

              for(int i = Gap; i < length ;i++){

                     TEMP_int = numbersIntData[i];
                     J=i;

                     while(J >= Gap && numbersIntData[J-Gap] > numbersIntData[J]){

                            numbersIntData[J] = numbersIntData[J-Gap];
                            J=J-Gap;
                     }

                     numbersIntData[J] = TEMP_int;
              }
       }
}

void Shell_sort_float(float numbersFloatData[], int length ){

       float TEMP_float=0;
       int J=0;
       for(int Gap = length /2 ; Gap > 0; Gap/=2){

              for(int i = Gap; i < length; i++){

                     TEMP_float = numbersFloatData[i];
                     J=i;

                     while( J >= Gap && numbersFloatData[J-Gap] > TEMP_float){

                            numbersFloatData[J] = numbersFloatData[J-Gap];
                            J = J-Gap;
                     }
                     numbersFloatData[J] = TEMP_float;
              }
       }
}

void Shell_sort_char(char CharsData[],int length){

       char TEMP_char='\0';
       int J=0;
       for(int Gap = length/2;Gap > 0 ; Gap /=2){

              for(int i=Gap; i < length ; i++){

                     TEMP_char = CharsData[i];
                     J=i;
                     while( J >= Gap && CharsData[J - Gap] > TEMP_char){

                            CharsData[J] = CharsData[J-Gap];
                            J=J-Gap;
                     }

                     CharsData[J] = TEMP_char;
              }
       }
}

void Shell_sort_string(string StringsData[],int length){

       string TEMP_string = "";
       int J = 0;

       for(int Gap = length/2; Gap > 0; Gap /= 2){

              for(int i = Gap; i < length ; i++){

                     TEMP_string = StringsData[i];
                     J = i;

                     while( J >= Gap && *StringsData[J-Gap] > *TEMP_string){

                            StringsData[J] = StringsData[J-Gap];
                            J=J-Gap;
                     }

                     StringsData[J] = TEMP_string;
              }
       }
}

//+++++++++++++++++++++++++++++++++++++++++++++++++MERGE SORT+++++++++++++++++++++++++++++++++++++++++++++++

void mergingHelper_int(int left_Array[],int right_Array[],int numbersIntData[],int length);                      //prior call
void mergingHelper_char(char left_Array[],char right_Array[],char numbersCharData[],int length);                 //prior call
void mergingHelper_float(float left_Array[],float right_Array[],float numbersFloatData[],int length);            //prior call
void mergingHelper_string(string left_Array[],string right_Array[], string numbersStringData[],int length);      //prior call
 
void Merge_sort_int(int numbersIntData[],int length){

    if(length <=1)return;

    int middle_Index=length/2;
    int left_Array[middle_Index];
    int right_Array[length-middle_Index];
    int rightPlacement=0;

    for(int i=0;i<length;i++){
        if(i<middle_Index){
            left_Array[i]=numbersIntData[i];
        }
        else{
            right_Array[rightPlacement]=numbersIntData[i];
            rightPlacement++;
        }
    }

    Merge_sort_int(left_Array,middle_Index);
    Merge_sort_int(right_Array,length-middle_Index);
    mergingHelper_int(left_Array,right_Array,numbersIntData,length);
}

void Merge_sort_float(float numbersFloatData[],int length){

    if(length <=1)return;

    int middle_Index=length/2;
    float left_Array[middle_Index];
    float right_Array[length-middle_Index];
    int rightPlacement=0;

    for(int i=0;i<length;i++){
        if(i<middle_Index){
            left_Array[i]=numbersFloatData[i];
        }
        else{
            right_Array[rightPlacement]=numbersFloatData[i];
            rightPlacement++;
        }
    }

    Merge_sort_float(left_Array,middle_Index);
    Merge_sort_float(right_Array,length-middle_Index);
    mergingHelper_float(left_Array,right_Array,numbersFloatData,length);
}

void Merge_sort_char(char CharsData[],int length){

    if(length <=1)return;

    int middle_Index=length/2;
    char left_Array[middle_Index];
    char right_Array[length-middle_Index];
    int rightPlacement=0;

    for(int i=0;i<length;i++){
        if(i<middle_Index){
            left_Array[i]=CharsData[i];
        }
        else{
            right_Array[rightPlacement]=CharsData[i];
            rightPlacement++;
        }
    }

    Merge_sort_char(left_Array,middle_Index);
    Merge_sort_char(right_Array,length-middle_Index);
    mergingHelper_char(left_Array,right_Array,CharsData,length);

}

void Merge_sort_string(string StringsData[],int length){

    if(length <=1)return;

    int middle_Index=length/2;
    string left_Array[middle_Index];
    string right_Array[length-middle_Index];
    int rightPlacement=0;

    for(int i=0;i<length;i++){
        if(i<middle_Index){
            left_Array[i]=StringsData[i];
        }
        else{
            right_Array[rightPlacement]=StringsData[i];
            rightPlacement++;
        }
    }

    Merge_sort_string(left_Array,middle_Index);
    Merge_sort_string(right_Array,length-middle_Index);
    mergingHelper_string(left_Array,right_Array,StringsData,length);
}

       // these functions will get called inside each merge sort function 
      // They actually do the sorting 

void mergingHelper_char(char left_Array[],char right_Array[],char CharsData[],int length){

    int left_Array_Size=length/2;
    int right_Array_Size=length-left_Array_Size;
    int numbersCharData_INDEX=0,left_Array_INDEX=0,right_Array_INDEX=0;

    while(left_Array_INDEX < left_Array_Size && right_Array_INDEX < right_Array_Size){

            if(left_Array[left_Array_INDEX] >= right_Array[right_Array_INDEX]){

                CharsData[numbersCharData_INDEX]=right_Array[right_Array_INDEX];
                numbersCharData_INDEX++;
                right_Array_INDEX++;
            }

            else{
                CharsData[numbersCharData_INDEX]=left_Array[left_Array_INDEX];
                left_Array_INDEX++;
                numbersCharData_INDEX++;
            }
    }

    while(right_Array_INDEX < right_Array_Size){

        CharsData[numbersCharData_INDEX]=right_Array[right_Array_INDEX];
                numbersCharData_INDEX++;
                right_Array_INDEX++;
    }

    while(left_Array_INDEX < left_Array_Size){
        CharsData[numbersCharData_INDEX]=left_Array[left_Array_INDEX];
                left_Array_INDEX++;
                numbersCharData_INDEX++;
    }

}

void mergingHelper_int(int left_Array[],int right_Array[],int numbersIntData[],int length){

    int left_Array_Size=length/2;
    int right_Array_Size=length-left_Array_Size;
    int numbersIntData_INDEX=0,left_Array_INDEX=0,right_Array_INDEX=0;

    while(left_Array_INDEX < left_Array_Size && right_Array_INDEX < right_Array_Size){

            if(left_Array[left_Array_INDEX] >= right_Array[right_Array_INDEX]){

                numbersIntData[numbersIntData_INDEX]=right_Array[right_Array_INDEX];
                numbersIntData_INDEX++;
                right_Array_INDEX++;
            }

            else{
                numbersIntData[numbersIntData_INDEX]=left_Array[left_Array_INDEX];
                left_Array_INDEX++;
                numbersIntData_INDEX++;
            }
    }

    while(right_Array_INDEX < right_Array_Size){

        numbersIntData[numbersIntData_INDEX]=right_Array[right_Array_INDEX];
                numbersIntData_INDEX++;
                right_Array_INDEX++;
    }

    while(left_Array_INDEX < left_Array_Size){
        numbersIntData[numbersIntData_INDEX]=left_Array[left_Array_INDEX];
                left_Array_INDEX++;
                numbersIntData_INDEX++;
    }

}

void mergingHelper_float(float left_Array[],float right_Array[],float numbersFloatData[],int length){

    int left_Array_Size=length/2;
    int right_Array_Size=length-left_Array_Size;
    int numbersFloatData_INDEX=0,left_Array_INDEX=0,right_Array_INDEX=0;

    while(left_Array_INDEX < left_Array_Size && right_Array_INDEX < right_Array_Size){

            if(left_Array[left_Array_INDEX] >= right_Array[right_Array_INDEX]){

                numbersFloatData[numbersFloatData_INDEX]=right_Array[right_Array_INDEX];
                numbersFloatData_INDEX++;
                right_Array_INDEX++;
            }

            else{
                numbersFloatData[numbersFloatData_INDEX]=left_Array[left_Array_INDEX];
                left_Array_INDEX++;
                numbersFloatData_INDEX++;
            }
    }

    while(right_Array_INDEX < right_Array_Size){

        numbersFloatData[numbersFloatData_INDEX]=right_Array[right_Array_INDEX];
                numbersFloatData_INDEX++;
                right_Array_INDEX++;
    }

    while(left_Array_INDEX < left_Array_Size){
        numbersFloatData[numbersFloatData_INDEX]=left_Array[left_Array_INDEX];
                left_Array_INDEX++;
                numbersFloatData_INDEX++;
    }

}

void mergingHelper_string(string left_Array[],string right_Array[],string StringsData[],int length){

    int left_Array_Size=length/2;
    int right_Array_Size=length-left_Array_Size;
    int numbersStringData_INDEX=0,left_Array_INDEX=0,right_Array_INDEX=0;

    while(left_Array_INDEX < left_Array_Size && right_Array_INDEX < right_Array_Size){

            if(*left_Array[left_Array_INDEX] >= *right_Array[right_Array_INDEX]){

                StringsData[numbersStringData_INDEX]=right_Array[right_Array_INDEX];
                numbersStringData_INDEX++;
                right_Array_INDEX++;
            }

            else{
                StringsData[numbersStringData_INDEX]=left_Array[left_Array_INDEX];
                left_Array_INDEX++;
                numbersStringData_INDEX++;
            }
    }

    while(right_Array_INDEX < right_Array_Size){

        StringsData[numbersStringData_INDEX]=right_Array[right_Array_INDEX];
                numbersStringData_INDEX++;
                right_Array_INDEX++;
    }

    while(left_Array_INDEX < left_Array_Size){
        StringsData[numbersStringData_INDEX]=left_Array[left_Array_INDEX];
                left_Array_INDEX++;
                numbersStringData_INDEX++;
    }

}

//+++++++++++++++++++++++++++++++++++++++++++++++++QUICK SORT+++++++++++++++++++++++++++++++++++++++++++++++

int partition_int(int numbersIntData[],int start_Index,int end_Index);           //prior call
int partition_float(float numbersFloatData[],int start_Index,int end_Index);    // prior call
int partition_char(char CharsData[],int start_Index,int end_Index);            //prior call
int partition_string(string StringsData[],int start_Index,int end_Index);       //prior call

void Quick_sort_int(int numbersIntData[],int start_Index,int end_Index){

 if(end_Index <= start_Index) return;
 int pivot_Index=partition_int(numbersIntData,start_Index,end_Index);       //get the pivot final resting place

 Quick_sort_int(numbersIntData,start_Index,pivot_Index-1);
 Quick_sort_int(numbersIntData,pivot_Index+1,end_Index);

}

void Quick_sort_float(float numbersFloatData[],int start_Index,int end_Index){

       if(end_Index <= start_Index) return;

       int pivot_Index=partition_float(numbersFloatData,start_Index,end_Index);     //get the pivot final resting place
       Quick_sort_float(numbersFloatData,start_Index,pivot_Index-1);
       Quick_sort_float(numbersFloatData,pivot_Index+1,end_Index);

}

void Quick_sort_char(char CharsData[],int start_Index,int end_Index){

   if(end_Index <= start_Index) return;

   int pivot_Index=partition_char(CharsData,start_Index,end_Index);         //get the pivot final resting place 

   Quick_sort_char(CharsData,start_Index,pivot_Index-1);         //recursion
   Quick_sort_char(CharsData,pivot_Index+1,end_Index);           //recursion

}

void Quick_sort_string(string StringsData[],int start_Index,int end_Index){

   if (end_Index <= start_Index ) return;

   int pivot_Index=partition_string(StringsData,start_Index,end_Index);     //get the pivot final resting place

   Quick_sort_string(StringsData,start_Index,pivot_Index-1);      //recursion
   Quick_sort_string(StringsData,pivot_Index+1,end_Index);        //recursion

}

  //these functions will calculate the pivot last resting place
  //which sort the Data

int partition_int(int numbersIntData[],int start_Index,int end_Index){

       int pivot=numbersIntData[end_Index];      //select last element as pivot

       int J=0,
       TEMP=0,
       i=start_Index-1;

       for(J=start_Index;J <= end_Index-1;J++){

         if(numbersIntData[J]<pivot){
            
                i++;
                TEMP=numbersIntData[J];
                numbersIntData[J]=numbersIntData[i];
                numbersIntData[i]=TEMP;

              }
       }      

       i++;
       TEMP=numbersIntData[J];
       numbersIntData[J]=numbersIntData[i];
       numbersIntData[i]=TEMP;

 return i;
}

int partition_float(float numbersFloatData[],int start_Index,int end_Index){

       float pivot=numbersFloatData[end_Index];    //set the last element as pivot 

       float TEMP=0;
       int J=0,
       i=start_Index-1;

       for(J=start_Index;J <= end_Index-1;J++){

              if(numbersFloatData[J] < pivot){

                     i++;
                     TEMP=numbersFloatData[J];
                     numbersFloatData[J]=numbersFloatData[i];
                     numbersFloatData[i]=TEMP;

              }

       }

       i++;
       TEMP=numbersFloatData[J];
        numbersFloatData[J]=numbersFloatData[i];
       numbersFloatData[i]=TEMP;

       return i;
}

int partition_char(char CharsData[],int start_Index,int end_Index){

 char pivot=CharsData[end_Index];       //set the last element as pivot

 char TEMP='\0';
 int J=0,
 i=start_Index-1;

   for(J=start_Index;J <= end_Index-1;J++){

      if(CharsData[J] < pivot){

         i++;
         TEMP=CharsData[J];
         CharsData[J]=CharsData[i];
         CharsData[i]=TEMP;

      }

   }

   i++;
   TEMP=CharsData[J];
   CharsData[J]=CharsData[i];
   CharsData[i]=TEMP;

  return i;
}

int partition_string(string StringsData[],int start_Index,int end_Index){

   char pivot= *StringsData[end_Index] ;     //set the last element as pivot 
   string TEMP="";

   int J=0,
   i=start_Index-1;

   for(J=start_Index; J <= end_Index-1;J++){

      if(*StringsData[J]<pivot){

         i++;
         TEMP=StringsData[J];
         StringsData[J]=StringsData[i];
         StringsData[i]=TEMP;

      }

   }

   i++;
   TEMP=StringsData[J];
   StringsData[J]=StringsData[i];
   StringsData[i]=TEMP;

   return i;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++Binary insertion SORT+++++++++++++++++++++++++++++++++++++++++++++++

int Binarysearch_int(int numbersIntData[], int Selected_item,int left_INDEX,int right_INDEX);                  //prior call
int Binarysearch_float(float numbersFloatData[], float Selected_item , int left_INDEX , int right_INDEX);       //prior call
int Binarysearch_char(char charsData[] , char Selected_item , int left_INDEX , int right_INDEX);                //prior call
int Binarysearech_string(string stringsData[] , string  Selected_item , int left_INDEX , int right_INDEX);      // prior call


void Binary_insertion_sort_int(int numbersIntData[],int length){

       int TEMP_int =0 , J=0, get_Item_location=0;

       for(int i=1 ; i < length ;i++){

              TEMP_int = numbersIntData[i];
              J = i-1;
              get_Item_location = Binarysearch_int(numbersIntData , TEMP_int , 0 ,J);      // get the item last loaction using Binary search

              while(J >= get_Item_location){

                     numbersIntData[J+1]=numbersIntData[J];
                     J--;

              }

              numbersIntData[J+1] = TEMP_int;
       }

}

void Binary_insertion_sort_float(float numbersFloatData[] , int length){

       float TEMP_float =0.0f;

       int J=0,get_Item_location=0;

       for(int i = 1; i < length; i++){

              TEMP_float = numbersFloatData[i];
              J=i-1;

              get_Item_location = Binarysearch_float(numbersFloatData , TEMP_float , 0 , J);             // get the item final  resting place  using Binary search

              while( J >= get_Item_location){

                     numbersFloatData[J+1] = numbersFloatData[J];
                     J--; 
              }

              numbersFloatData[J+1] = TEMP_float;
       }

}

void Binary_insertion_sort_char(char charsData[], int length ){

       char TEMP_char = '\0';
       int J=0,get_Item_location = 0;


       for(int i = 1; i < length ; i++){

              TEMP_char = charsData[i];
              J = i-1;
              get_Item_location = Binarysearch_char(charsData , TEMP_char , 0 , J);         // get the item final  resting place  using Binary search

              while( J >= get_Item_location){

                     charsData[J+1] = charsData[J];
                     J--;


              }
              charsData[J+1] = TEMP_char;

       }



}

void Binary_insertion_sort_string(string stringsData[], int length){

       string TEMP_string = " ";
       int J=0,get_Item_locations = 0;

       for(int i = 1; i < length ; i++){

              TEMP_string = stringsData[i];
              J = i-1;
              get_Item_locations = Binarysearech_string(stringsData, TEMP_string,0,J);

              while( J >= get_Item_locations){

                     stringsData[J+1]=stringsData[J];
                     J--;

              }

              stringsData[J+1] = TEMP_string;
       }

}

       // these function will find the right item finasl resting place 

int Binarysearch_int(int numbersIntData[], int Selected_item,int left_INDEX,int right_INDEX){

       if( left_INDEX >= right_INDEX) return ( Selected_item >= numbersIntData[left_INDEX] ) ? left_INDEX+1 : left_INDEX;

       int mid_INDEX = (left_INDEX + right_INDEX) / 2;

       if (Selected_item ==numbersIntData[mid_INDEX] ) return mid_INDEX + 1;

      else if( Selected_item > numbersIntData[mid_INDEX]) return Binarysearch_int( numbersIntData, Selected_item, mid_INDEX+1 , right_INDEX);

      Binarysearch_int(numbersIntData,Selected_item,left_INDEX,mid_INDEX-1);

}

int Binarysearch_float(float numbersFloatData[], float Selected_item , int left_INDEX , int right_INDEX){

       if(  left_INDEX >= right_INDEX ) return ( Selected_item > numbersFloatData[left_INDEX]) ?  left_INDEX + 1 : left_INDEX ;

       int mid_INDEX = (left_INDEX + right_INDEX) / 2;

       if(Selected_item  == numbersFloatData[mid_INDEX]) return mid_INDEX + 1;

       else if( Selected_item > numbersFloatData[mid_INDEX] ) return Binarysearch_float( numbersFloatData , Selected_item , mid_INDEX+1 , right_INDEX ); 

       Binarysearch_float( numbersFloatData , Selected_item , left_INDEX , mid_INDEX-1 );

}

int Binarysearch_char(char charsData[] , char Selected_item , int left_INDEX , int right_INDEX){

       if( left_INDEX >= right_INDEX ) return (Selected_item >= charsData[left_INDEX] ) ? left_INDEX+1 : left_INDEX;

       int mid_INDEX = (left_INDEX + right_INDEX) /2 ;

       if(Selected_item == charsData[mid_INDEX] ) return mid_INDEX + 1;

       else if(Selected_item > charsData[mid_INDEX]) return Binarysearch_char(charsData , Selected_item , mid_INDEX + 1 , right_INDEX);

       return Binarysearch_char(charsData , Selected_item ,left_INDEX , mid_INDEX - 1);


}

int Binarysearech_string(string stringsData[] , string  Selected_item , int left_INDEX , int right_INDEX){

       if( left_INDEX >= right_INDEX ) return (*Selected_item >= *stringsData[left_INDEX] )  ? left_INDEX + 1: left_INDEX;

       int mid_INDEX = (left_INDEX + right_INDEX ) / 2 ;

       if(*Selected_item == *stringsData[mid_INDEX]) return mid_INDEX+1;

       else if( *Selected_item > *stringsData[mid_INDEX]) return Binarysearech_string(stringsData, Selected_item, mid_INDEX+1 , right_INDEX);

       return Binarysearech_string(stringsData, Selected_item, left_INDEX,mid_INDEX-1);

}

//+++++++++++++++++++++++++++++++++++++++++++++++++Tim SORT+++++++++++++++++++++++++++++++++++++++++++++++

       /*
               this not full Tim sort , Tim sort is  large and complex sorting algorthim
               behind python and java . in order to make the library simple and small we will use smaller version
               of Tim sort
               
       */   

#define MIN_RUN_SIZE 32            // this can be changed to 64
#define min(a, b) (a < b ? a:b)    // creating a macro to find minimum 

void Tim_binary_insertion_sort_int(int numbersIntData[],int start_Index , int end_Index);                //prior call
void Tim_binary_insertion_sort_float(float numbersFloatData[],int start_Index , int end_Index);          //prior call
void Tim_binary_insertion_sort_char(char charsData[] ,int start_Index,int end_Index);                    //prior call
void Tim_binary_insertion_sort_string(string stringsData[] ,int start_Index,int end_Index);              //prior call

void Tim_merging_int(int numbersIntData[],int left,int middle,int right);                                //prior call
void Tim_merging_float(float numbersFloatData[],int left,int middle,int right);                          //prior call
void Tim_merging_char(char charsData[],int left,int middle,int right);                                   //prior call
void Tim_merging_string(string stringsData[],int left,int middle,int right);                             //prior call


void Tim_sort_int(int numbersIntData[],int length){

       int end_Index=0;
       for(int i=0; i < length ; i+=MIN_RUN_SIZE) 
       {
              end_Index =min((i+MIN_RUN_SIZE-1),(length-1));       
              Tim_binary_insertion_sort_int(numbersIntData,i,end_Index);
       }

       for(int size = MIN_RUN_SIZE ; size < length ; size *=2 ){

              for(int left_INDEX = 0; left_INDEX < length ; left_INDEX += 2 *size){

                     int middle_INDEX = left_INDEX + size -1;
                     int right_INDEX = min((left_INDEX + 2*size - 1),(length - 1));

                     if(middle_INDEX < right_INDEX) Tim_merging_int(numbersIntData,left_INDEX,middle_INDEX,right_INDEX);
 

              }



       }



}

void Tim_sort_float(float numbersFloatData[],int length){
       
              int end_Index=0;
              for(int i=0; i < length ; i+=MIN_RUN_SIZE) 
              {
                     end_Index =min((i+MIN_RUN_SIZE-1),(length-1));       
                     Tim_binary_insertion_sort_float(numbersFloatData,i,end_Index);
              }

              for(int size = MIN_RUN_SIZE ; size < length ; size *=2 ){

                     for(int left_INDEX = 0; left_INDEX < length ; left_INDEX += 2 *size){

                            int middle_INDEX = left_INDEX + size -1;
                            int right_INDEX = min((left_INDEX + 2*size - 1),(length - 1));

                            if(middle_INDEX < right_INDEX) Tim_merging_float(numbersFloatData,left_INDEX,middle_INDEX,right_INDEX);
       

                     }

              }
}

void Tim_sort_char(char charsData[],int length){


        int end_Index=0;
              for(int i=0; i < length ; i+=MIN_RUN_SIZE) 
              {
                     end_Index =min((i+MIN_RUN_SIZE-1),(length-1));       
                     Tim_binary_insertion_sort_char(charsData,i,end_Index);
              }

              for(int size = MIN_RUN_SIZE ; size < length ; size *=2 ){

                     for(int left_INDEX = 0; left_INDEX < length ; left_INDEX += 2 *size){

                            int middle_INDEX = left_INDEX + size -1;
                            int right_INDEX = min((left_INDEX + 2*size - 1),(length - 1));

                            if(middle_INDEX < right_INDEX) Tim_merging_char(charsData,left_INDEX,middle_INDEX,right_INDEX);
       

                     }

              }


}

void Tim_sort_string(string stringsData[],int length){

              int end_Index=0;
              for(int i=0; i < length ; i+=MIN_RUN_SIZE) 
              {
                     end_Index =min((i+MIN_RUN_SIZE-1),(length-1));       
                     Tim_binary_insertion_sort_string(stringsData,i,end_Index);
              }

              for(int size = MIN_RUN_SIZE ; size < length ; size *=2 ){

                     for(int left_INDEX = 0; left_INDEX < length ; left_INDEX += 2 *size){

                            int middle_INDEX = left_INDEX + size -1;
                            int right_INDEX = min((left_INDEX + 2*size - 1),(length - 1));

                           if(middle_INDEX < right_INDEX) Tim_merging_string(stringsData,left_INDEX,middle_INDEX,right_INDEX);
       

                     }

              }


}

       //these functions will sort each small runs

void Tim_binary_insertion_sort_int(int numbersIntData[],int start_Index , int end_Index){

       int TEMP_int =0 , J=0, get_Item_location=0;

       for(int i=start_Index+1 ; i <= end_Index ;i++){

              TEMP_int = numbersIntData[i];
              J = i-1;
              get_Item_location = Binarysearch_int(numbersIntData , TEMP_int , 0 ,J);      // got implemented before in Binary_insertion_sort_int

              while(J >= get_Item_location){

                     numbersIntData[J+1]=numbersIntData[J];
                     J--;

              }

              numbersIntData[J+1] = TEMP_int;
       }

}

void Tim_binary_insertion_sort_float(float numbersFloatData[],int start_Index , int end_Index){

       float TEMP_float =0.0;
       int  J=0, get_Item_location=0;

       for(int i=start_Index+1 ; i <= end_Index ;i++){

              TEMP_float = numbersFloatData[i];
              J = i-1;
              get_Item_location = Binarysearch_float(numbersFloatData , TEMP_float , 0 ,J);      // got implemented before in Binary_insertion_sort_float

              while(J >= get_Item_location){

                     numbersFloatData[J+1]=numbersFloatData[J];
                     J--;

              }

              numbersFloatData[J+1] = TEMP_float;
       }

}

void Tim_binary_insertion_sort_char(char charsData[] ,int start_Index,int end_Index){

       char TEMP_char ='\0' ;
       int J=0, get_Item_location=0;

       for(int i=start_Index+1 ; i <= end_Index ;i++){

              TEMP_char = charsData[i];
              J = i-1;
              get_Item_location = Binarysearch_char(charsData , TEMP_char , 0 ,J);      // got implemented before in Binary_insertion_sort_float

              while(J >= get_Item_location){

                     charsData[J+1]=charsData[J];
                     J--;

              }

              charsData[J+1] = TEMP_char;
       }

}

void Tim_binary_insertion_sort_string(string stringsData[] ,int start_Index,int end_Index){

       string TEMP_string ="" ;
       int  J=0, get_Item_location=0;

       for(int i=start_Index+1 ; i <= end_Index ;i++){

              TEMP_string = stringsData[i];
              J = i-1;
              get_Item_location = Binarysearech_string(stringsData , TEMP_string , 0 ,J);      // got implemented before in Binary_insertion_sort_float

              while(J >= get_Item_location){

                     stringsData[J+1]=stringsData[J];
                     J--;

              }

              stringsData[J+1] = TEMP_string;
       

       }
}

       // these functions will do the final sorting between the runs

void Tim_merging_int(int numbersIntData[],int left,int middle,int right){

       int array_Left_length=middle-left+1, array_Right_length=right-middle;
       int array_Left[array_Left_length] ,array_Right[array_Right_length];

       for(int i=0 ; i <array_Left_length;i++) array_Left[i]=numbersIntData[left+i];

       for(int J = 0 ; J < array_Right_length;J++) array_Right[J] = numbersIntData[middle+1+J];

       int left_INDEX=0,right_INDEX=0,set_INDEX=left;         //these variables will be used to set the correct index for the elements in the sub-arrays

       while(left_INDEX < array_Left_length && right_INDEX < array_Right_length){

              if(array_Left[ left_INDEX ] <= array_Right[right_INDEX]){

                     numbersIntData[set_INDEX] = array_Left[left_INDEX];
                     left_INDEX++;
              }
              else{
                     numbersIntData[set_INDEX] = array_Right[right_INDEX];
                     right_INDEX++;
              }
              set_INDEX++;
       }

       while(left_INDEX < array_Left_length){

              numbersIntData[set_INDEX] = array_Left[left_INDEX];
              left_INDEX++;
              set_INDEX++;
       }

       while(right_INDEX < array_Right_length){
             numbersIntData[set_INDEX] = array_Right[right_INDEX];
              right_INDEX++;
              set_INDEX++;
       }
}

void Tim_merging_float(float numbersFloatData[],int left,int middle,int right){

       int array_Left_length=middle-left+1, array_Right_length=right-middle;
       float array_Left[array_Left_length] ,array_Right[array_Right_length];

       for(int i=0 ; i <array_Left_length;i++) array_Left[i]=numbersFloatData[left+i];

       for(int J = 0 ; J < array_Right_length;J++) array_Right[J] = numbersFloatData[middle+1+J];

       int left_INDEX=0,right_INDEX=0,set_INDEX=left;         //these variables will be used to set the correct index for the elements in the sub-arrays

       while(left_INDEX < array_Left_length && right_INDEX < array_Right_length){

              if(array_Left[ left_INDEX ] <= array_Right[right_INDEX]){

                     numbersFloatData[set_INDEX] = array_Left[left_INDEX];
                     left_INDEX++;
              }
              else{
                     numbersFloatData[set_INDEX] = array_Right[right_INDEX];
                     right_INDEX++;
              }
              set_INDEX++;
       }

       while(left_INDEX < array_Left_length){

              numbersFloatData[set_INDEX] = array_Left[left_INDEX];
              left_INDEX++;
              set_INDEX++;
       }

       while(right_INDEX < array_Right_length){
             numbersFloatData[set_INDEX] = array_Right[right_INDEX];
              right_INDEX++;
              set_INDEX++;
       }



}

void Tim_merging_char(char charsData[],int left,int middle,int right){

       int array_Left_length=middle-left+1, array_Right_length=right-middle;
       char array_Left[array_Left_length] ,array_Right[array_Right_length];

       for(int i=0 ; i <array_Left_length;i++) array_Left[i]=charsData[left+i];

       for(int J = 0 ; J < array_Right_length;J++) array_Right[J] = charsData[middle+1+J];

       int left_INDEX=0,right_INDEX=0,set_INDEX=left;         //these variables will be used to set the correct index for the elements in the sub-arrays

       while(left_INDEX < array_Left_length && right_INDEX < array_Right_length){

              if(array_Left[ left_INDEX ] <= array_Right[right_INDEX]){

                     charsData[set_INDEX] = array_Left[left_INDEX];
                     left_INDEX++;
              }
              else{
                     charsData[set_INDEX] = array_Right[right_INDEX];
                     right_INDEX++;
              }
              set_INDEX++;
       }

       while(left_INDEX < array_Left_length){

              charsData[set_INDEX] = array_Left[left_INDEX];
              left_INDEX++;
              set_INDEX++;
       }

       while(right_INDEX < array_Right_length){
             charsData[set_INDEX] = array_Right[right_INDEX];
              right_INDEX++;
              set_INDEX++;
       }
}

void Tim_merging_string(string stringsData[],int left,int middle,int right){

       int array_Left_length=middle-left+1, array_Right_length=right-middle;
       string array_Left[array_Left_length] ,array_Right[array_Right_length];

       for(int i=0 ; i <array_Left_length;i++) array_Left[i]=stringsData[left+i];

       for(int J = 0 ; J < array_Right_length;J++) array_Right[J] = stringsData[middle+1+J];

       int left_INDEX=0,right_INDEX=0,set_INDEX=left;         //these variables will be used to set the correct index for the elements in the sub-arrays

       while(left_INDEX < array_Left_length && right_INDEX < array_Right_length){

              if(*array_Left[ left_INDEX ] <= *array_Right[right_INDEX]){

                     stringsData[set_INDEX] = array_Left[left_INDEX];
                     left_INDEX++;
              }
              else{
                     stringsData[set_INDEX] = array_Right[right_INDEX];
                     right_INDEX++;
              }
              set_INDEX++;
       }

       while(left_INDEX < array_Left_length){

              stringsData[set_INDEX] = array_Left[left_INDEX];
              left_INDEX++;
              set_INDEX++;
       }

       while(right_INDEX < array_Right_length){
             stringsData[set_INDEX] = array_Right[right_INDEX];
              right_INDEX++;
              set_INDEX++;

       }
       

}

//====================================================================================================================================================================

void Displayf_int(int ShowIntData[],int length){
       for(int i=0;i<length;i++){
              printf("%d ",ShowIntData[i]);
       }
       printf("\n");
} 

void Displayf_char(char ShowCharData[],int length){
       for(int i=0;i<length;i++){
              printf("%c ",ShowCharData[i]);
       }
       printf("\n");
}

void Displayf_string(string ShowStringData[],int length){
       for(int i=0;i<length;i++){
              printf("%s ",ShowStringData[i]);
       }
       printf("\n");
}

void Displayf_float(float ShowFloatData[],int length){
       for(int i=0;i<length;i++){
              printf("%.5f ",ShowFloatData[i]);
       }
       printf("\n");
} 

#endif        // for #ifdef SORTLIB_IMPLEMENTATION

#endif        // for #ifndef SORTLIB_H