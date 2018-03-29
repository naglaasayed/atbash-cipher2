#include<iostream>
#iclude<string>
Using namepace std;
string ciphertext,text;
char x[26],y[26];
x[0]='A',x[1]='B',x[2]='C',x[3]='D',x[4]='E',x[5]='F',x[6]='G',x[7]='H',x[8]='I',x[9]='J',x[10]='K',x[11]='L';
x[12]='M',x[13]='N',x[14]='O',x[15]='P',x[16]='Q',x[17]='R',x[18]='S',x[19]='T',x[20]='U',x[21]='V',x[22]='W',x[23]='X',x[24]='Y',x[25]='Z';
y[25]='A',y[24]='B',y[23]='C',y[22]='D',y[21]='E',y[20]='F',y[19]='G',y[18]='H',y[17]='I',y[16]='J',y[15]='K',y[14]='L';
y[13]='M',y[12]='N',y[11]='O',y[10]='P',y[9]='Q',y[8]='R',y[7]='S',y[6]='T',y[5]='U',y[4]='V',y[3]='W',y[2]='X',y[1]='Y',y[0]='Z';
int choice,c;
cout<<"Ahlan Ya User Ya Habibi "<<"\n";
cout<<"what do you like to do today ?!"<<"\n";
cout<<"1-Cipher a message"<<"\n";
cout<<"2-Decipher a message"<<"\n";
cout<<"3-End"<<"\n";
cin>>choice;
if (choice==1)
{
cout<<"enter the plain text : ";
cin.ignore();
getline(cin,text);
cout<<endl;
for (int j=0; j<text.size(); j++)
{
text[j]=char(toupper(text[j]));
for (int i=0; i<26; i++)
{
if (text[j]==x[i])
{
ciphertext+=y[i];
}
}
if (text[j]==' ')
{
ciphertext+=' ';
}
}
cout<<ciphertext;
}
else if (choice==2)
{
cout<<"enter the cipher text : ";
cin.ignore();
getline(cin,ciphertext);
cout<<endl;
for (int j=0; j<ciphertext.size(); j++)
{
ciphertext[j]=char(toupper(ciphertext[j]));
for (int i=0; i<26; i++)
{
if (ciphertext[j]==y[i])
{
text+=x[i];
}
}
if (ciphertext[j]==' ')
{
text+=' ';
}
}
cout<<text;
}
else {
cout<<"__________END__________"<<"\a";
}
