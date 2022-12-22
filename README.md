<div align="justify">

<div align="center">

# Algoritmos de Ordenação
#### Algorithms of Ordenation
![vscode](https://img.shields.io/badge/VSCode-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white) ![c++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black) ![macOS](https://img.shields.io/badge/mac%20os-000000?style=for-the-badge&logo=apple&logoColor=white)

[BubbleSort](#1---bubblesort) | [InsertionSort](#2---insertionsort) 

</div>

### 1 - BubbleSort


O algoritmo da bolha, como é conhecido é o algoritmo de ordenação mais simples de acordo com a literatura. Consiste em percorrer o vetor várias vezes, executando trocas de posião conforme a ordenação desejada - crescente ou decrescente. O BubbleSort faz as comparações do seu índice *i* com seu próximo, *i+1* e então, conforme a regra de ordenação, se necessário, faz a troca(Swap). Abaixo, há um pseudocódigo para a ordenação de forma crescente utilizando BubbleSort.

```
Procedimento BUBBLE_SORT(vetor vec){

    Para i até n.size() - 1
        Para j até n.size() - 1 

            Se vec[j] > vec[j+1]
                
                //Faz Swap
                aux = vec[j]
                vec[j] = vec[j+1]
                vec[j+1] = aux

            Fim-Se
        Fim-Para
    Fim-Para
}
```
O primeiro *loop* é para percorrer o vetor até o penultimo elemento. É o segundo *loop* mais interno é o que sera iniciado varias vezes conforme o tamanho do vetor ou lista a ser ordenado.

<div align="center">

![bubble](https://3.bp.blogspot.com/-pXF1nujk0Tg/UHHRCLUA7WI/AAAAAAAAAXA/l6DiIebY1Rg/s1600/bubblesort.png)

Exemplo do Algoritmo BubbleSort - Imagen retirada de *Nerds Attack*
</div>

> BubbleSort é um algoritmo de Ordenação lento, com custo $\mathcal{O}(n^2)$ para seu pior caso e caso médio. Conforme literatura, deve ser utilizado se houver o conhecimento dos dados, estiverem pré-ordenados.
> Seu melhor caso é quando o vetor ou lista está totalmente ordenado. Complexidade $\mathcal{O}(n).$

### 2 - InsertionSort

O Algoritmo de Inserção é outro algoritmo de ordenação. Sua principal característica está em mover os valores para inserir o valor na posição desejada, com o intuito de ordenar, seja de forma crescente ou decrescente. O pseudocódigo abaixo deixa evidente como o InsertionSort funciona.

````
Procedimento InsertionSor(vetor vec){

    Para j = 1 até vec.size()

        key = vec[j]
        i = j - 1

        Enquanto i >= 0 && vec[i] > key faça:
            
            //Move os valores do vetor
            vec[i+1] = vec[i]
            i = i - 1 

        Fim-Enquanto
    
        vec[i+1] = key // Adciona o valor ao lugar desejado
    Fim-Para    
}
````
Conforme o pseudocódigo acima, retirado do livro *Algorithms* de *T.H Cormen* percebe-se que o vetor é percorrido por meio do primeiro *loop*, entretanto, é seguido de outro *loop* que existe apenas para deslocar os valores de acordo com a regra de ordenação apos o deslocamentos o *loop* interno é encerrado e então o valor é inserido na posião desejado.

<div align="center">

![insertion](https://upload.wikimedia.org/wikipedia/commons/thumb/0/0f/Insertion-sort-example-300px.gif/220px-Insertion-sort-example-300px.gif)

Exemplo do Algoritmo InsertionSort - Gif retirado da internet.
</div>

> Assim como o BubbleSort, o InsertionSort é um algoritmo de ordenação lento, com complexidade $\mathcal{O}(n^2)$ para o pior caso e o caso médio.
> O seu melhor caso, também é alcançado quando o vetor ou lista está totalmente ordenado, tendo complexidade $\mathcal{O}(n)$. 

### 3 - SelectionSort

### 4 - QuickSort

### 5 - MergeSort

### 6 - Conclusão

### 7 - Referências



</div>


