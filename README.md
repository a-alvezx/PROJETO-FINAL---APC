
# 🚛 FleetSys: Sistema de Gestão e Manutenção de Frotas

![Language](https://img.shields.io/badge/Language-C-blue)

![Status](https://img.shields.io/badge/Status-Em_Desenvolvimento-yellow)

![Focus](https://img.shields.io/badge/Focus-Engineering_&_Logistics-green)
## 📄 Sobre o Projeto

Andre Alves Mendes - 252003794

O **FleetSys** é uma aplicação de console desenvolvida em linguagem C pura, focada na **Engenharia de Manutenção** e gestão de ativos logísticos.

Este sistema foi projetado com a lógica de "Manutenção Preventiva". Ele não apenas armazena dados da frota, mas atua como uma ferramenta de decisão, monitorando a quilometragem dos veículos e alertando automaticamente quando uma revisão é necessária, visando a redução de custos operacionais e o aumento da disponibilidade da frota.

Este projeto foi desenvolvido como requisito final da disciplina de **Algoritmos e Programação de Computadores (APC)** na **Universidade de Brasília (UnB)**.

---


## ⚙️ Funcionalidades Principais

O sistema opera sobre uma arquitetura **CRUD** (Create, Read, Update, Delete) com persistência de dados em arquivo:

* **📋 Cadastro de Ativos:** Registro detalhado de veículos (Placa, Modelo, Combustível).
* **🔍 Monitoramento Inteligente:** Na listagem da frota, o algoritmo destaca visualmente veículos que ultrapassaram o limite de rodagem seguro.
* **🛣️ Simulação de Tráfego:** Atualização dinâmica do hodômetro (quilometragem) para simular viagens.
* **💾 Persistência de Dados:** Sistema de Arquivos (File Handling) para salvar e carregar a frota, garantindo que os dados não se percam.
* **📊 Relatórios Gerenciais:** (Em desenvolvimento) Visão geral do estado da frota.

---
## 🛠️ Tecnologias e Conceitos Aplicados

Este projeto explora conceitos fundamentais da Engenharia de Software e da Linguagem C:

* **Estruturas de Dados (Structs):** Para modelagem de objetos reais (Veículos).
* **Manipulação de Arquivos (File I/O):** Leitura e escrita de banco de dados em `.txt`/`.bin`.
* **Alocação de Memória e Ponteiros:** Gestão eficiente de recursos.
* **Modularização:** Código limpo dividido em funções e procedimentos.
* **Lógica Condicional Aplicada:** Algoritmos para cálculo de manutenção preventiva.

---
