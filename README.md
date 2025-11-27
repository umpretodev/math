# 🧮 Math C

Projetinho com funções matemáticas em C, da disciplina de compiladores.

### 🏗️ Arquitetura do projeto

```
├── 📄 main.c
├── 📄 Makefile
└── 📁 src/
    ├── 📁 heads/    # Headers
    │   ├── 📄 div.h
    │   ├── 📄 mult.h
    │   ├── 📄 poww.h
    │   ├── 📄 sqrtt.h
    │   ├── 📄 sub.h
    │   └── 📄 sum.h
    └── 📁 impls/    # Impls
        ├── 📄 div.c
        ├── 📄 mult.c
        ├── 📄 poww.c
        ├── 📄 sqrtt.c
        ├── 📄 sub.c
        └── 📄 sum.c
```

### 🚀 Executando o projeto
Para executar o projeto, basta executar os comandos no makefile configurados a partir do projeto <a href="https://github.com/tioguerra/ComilaSeparadoC"> projeto disponibilizado pelo professor</a>.
```~shell
make clean && make && make run
```
