# Entrada de IO de Forma segura



# Atof
Quando vamos lidar com valores flutuantes dentro da linguagem C, mas recebemos
o valor como uma string, ou como um caractere ASCII mais precisamente falando,
precisamos que esse valor seja convertido, e convenientemente a linguagem C
já possui uma função que consegue, e pode ser responsável por isso, sendo a 
função `atof()`, essa função literalmente significa `ASCII to Float`,  ou seja,
transformar um valor de ascii em float de forma que ele consiga ser usado 
numericamente, como mostrado dentro do nosso código e dentro do seguinte exemplo:


```C
char b_char[10];
float b = 0;

if(fgets(b_char, sizeof(b_char), stdin) != NULL){
    b = atof(b_char);
}
```

# _WIN32 e _WIN64




# Importando declarações e não implementações