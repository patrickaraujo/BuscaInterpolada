# 🔍 Busca Interpolada (*Interpolation Search*)

A **busca interpolada** (ou *interpolation search*) é um algoritmo de busca otimizado para **listas ordenadas de forma uniforme** (ou aproximadamente uniforme). Ela é uma versão aprimorada da busca binária, que tenta adivinhar a posição do elemento procurado com base em uma **interpolação linear**, em vez de simplesmente olhar o meio da lista.

---

## 🧠 Intuição

Imagine que você está procurando por um número em uma lista ordenada de forma crescente.  
Se você sabe que os números são distribuídos de forma uniforme (por exemplo, `10, 20, 30, ..., 1000`), então faz mais sentido procurar **próximo da posição onde provavelmente o número está**, em vez de ir direto para o meio da lista como faria a busca binária.

---

## 🔢 Fórmula da Posição Estimada

A busca interpolada estima a posição do elemento com base nesta fórmula:

```math
\text{pos} = \text{low} + \frac{(\text{key} - A[\text{low}]) \cdot (\text{high} - \text{low})}{A[\text{high}] - A[\text{low}]}
```

**Onde:**
- `key` é o valor que você está procurando,
- `A` é o vetor ordenado,
- `low` e `high` são os índices do intervalo de busca atual.

---

## ✅ Vantagens

- Pode ser **mais rápida** que a busca binária quando os dados são **uniformemente distribuídos**.
- Complexidade média: **O(log log n)** (melhor que O(log n) da busca binária em listas uniformes).

---

## ⚠️ Desvantagens

- Pode ter desempenho ruim (até **O(n)**) se os dados **não forem uniformemente distribuídos**.
- É **mais complexa de implementar** do que a busca binária.
- **Não funciona** corretamente em listas **não ordenadas**.

---

## 📌 Observação

A busca interpolada é recomendada **apenas para vetores ordenados com distribuição aproximadamente uniforme**. Para vetores ordenados, porém com distribuição irregular, a busca binária pode ser mais eficaz.
