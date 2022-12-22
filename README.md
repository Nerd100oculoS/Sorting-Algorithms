<div align="justify">

<div align="center">

# Algoritmos de Ordenação
#### Algorithms of Ordenation
![vscode](https://img.shields.io/badge/VSCode-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white) ![c++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black) ![macOS](https://img.shields.io/badge/mac%20os-000000?style=for-the-badge&logo=apple&logoColor=white)


</div>

### 1 - BubbleSort

O algoritmo da bolha, como é conhecido é o algoritmo de ordenação mais simpes de acordo com a literatura. Consiste em percorrer o vetor várias vezes, executando trocas de posião conforme a ordenação desejada - crescente ou decrescente. O BubbleSort faz as comparações do seu índice *i* com seu próximo, *i+1* e então, conforme a regra de ordenação, se necessário, faz a troca(Swap). Abaixo, há um pseudocódigo para a ordenação de forma crescente utilizando BubbleSort.

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
Exemplo do Algoritmo BubbleSort - Imagen retirada de *Nerds Atack*
</div>

> BubbleSort é um algoritmo de Ordenação lento, com custo $\mathcal{O}(n^2)$ para seu pior caso e caso médio. Conforme literatura, deve ser utilizado se houver o conhecimento dos dados, estiverem pré-ordenados.
> Seu melhor caso é quando o vetor ou lista está totalmente ordenado. Complexidade $\mathcal{O}(n).$

### 2 - InsertionSort


### 3 - SelectionSort

### 4 - QuickSort

### 5 - MergSort

### 6 - Conclusão

### 7 - Referências



</div>


