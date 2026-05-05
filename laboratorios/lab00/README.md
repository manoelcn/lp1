[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Z5Kpsxgq)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=23205701)
# 👋 Noções básicas do GitHub

## 🤓 Visão geral do laboratório

O objetivo deste laboratório é dar a você uma breve introdução ao GitHub. Também forneceremos materiais para aprendizado posterior e algumas ideias para você começar em nossa plataforma. 🚀

## :octocat: Git e GitHub

O Git é um **Sistema de Controle de Versão (VCS) distribuído**, o que significa que é uma ferramenta útil para rastrear facilmente as alterações no seu código, colaborar e compartilhar. Com o Git, você pode rastrear as alterações feitas no seu projeto para sempre ter um registro do que trabalhou e pode facilmente reverter para uma versão mais antiga, se necessário. Ele também facilita o trabalho com outras pessoas — grupos de pessoas podem trabalhar juntas no mesmo projeto e mesclar suas alterações em uma fonte final!

O GitHub é uma maneira de usar o mesmo poder do Git on-line com uma interface fácil de usar. Ele é usado em todo o mundo do software e além para colaborar e manter o histórico de projetos.

O GitHub é o lar de algumas das tecnologias mais avançadas do mundo. Quer você esteja visualizando dados ou criando um novo jogo, há uma comunidade inteira e um conjunto de ferramentas no GitHub que podem levá-lo ao próximo passo. Este curso começa com os conceitos básicos do GitHub, mas vamos nos aprofundar no resto mais tarde.

## :octocat: Compreendendo o fluxo do GitHub

O fluxo do GitHub (_GitHub flow_) é um fluxo de trabalho leve que permite que você experimente e colabore em seus projetos facilmente, sem o risco de perder seu trabalho anterior.

### Repositórios

Um repositório é onde o trabalho do seu projeto acontece — pense nele como sua pasta de projeto. Ele contém todos os arquivos do seu projeto e histórico de revisão. Você pode trabalhar dentro de um repositório sozinho ou convidar outros para colaborar com você nesses arquivos.

### Clone

Quando um repositório é criado com o GitHub, ele é armazenado remotamente na ☁️. Você pode clonar um repositório para criar uma cópia local no seu computador e então usar o Git para sincronizar os dois. Isso torna mais fácil corrigir problemas, adicionar ou remover arquivos e enviar commits maiores. Você também pode usar a ferramenta de edição de sua escolha em vez da interface do usuário do GitHub. Clonar um repositório também puxa todos os dados do repositório que o GitHub tem naquele momento, incluindo todas as versões de cada arquivo e pasta do projeto! Isso pode ser útil se você experimentar seu projeto e então perceber que gostou mais de uma versão anterior.
Para saber mais sobre clonagem, leia ["Clonar um Repositório"](https://docs.github.com/pt/repositories/creating-and-managing-repositories/cloning-a-repository). 

### Committ e push
**Committing** e **pushing** são como você pode adicionar as alterações feitas na sua máquina local ao repositório remoto no GitHub. Dessa forma, seu instrutor e/ou colegas de equipe podem ver seu trabalho mais recente quando você estiver pronto para compartilhá-lo. Você pode fazer um _commit_ quando tiver feito alterações no seu projeto que deseja "checkpoint". Você também pode adicionar uma **mensagem de _commit_** útil para lembrar a si mesmo ou aos seus colegas de equipe qual trabalho você fez (por exemplo, "Adicionado um README com informações sobre nosso projeto").

Depois que você tiver um _commit_ ou vários _commits_ que esteja pronto para adicionar ao seu repositório, você pode usar o comando _push_ para adicionar essas alterações ao seu repositório remoto. Fazer _commit_ e _push_ pode parecer algo novo no começo, mas prometemos que você vai se acostumar 🙂

## 💻 Termos do GitHub para saber

### Repositórios
Já mencionamos repositórios, eles são onde o trabalho do seu projeto acontece, mas vamos falar um pouco mais sobre os detalhes deles! Conforme você trabalha mais no GitHub, você terá muitos repositórios que podem parecer confusos no começo. Felizmente, seu ["painel do GitHub"](https://docs.github.com/pt/account-and-profile/setting-up-and-managing-your-personal-account-on-github/managing-user-account-settings/about-your-personal-dashboard) ajuda a navegar facilmente para seus repositórios e ver informações úteis sobre eles. Certifique-se de estar logado para vê-lo!

Os repositórios também contêm **README**s. Você pode adicionar um arquivo README ao seu repositório para dizer a outras pessoas por que seu projeto é útil, o que elas podem fazer com seu projeto e como podem usá-lo. Estamos usando este README para comunicar como aprender Git e GitHub com você. 😄
Para saber mais sobre repositórios, leia ["Criando, clonando e arquivando repositórios](https://docs.github.com/pt/repositories/creating-and-managing-repositories/about-repositories) e ["Sobre README's"](https://docs.github.com/pt/repositories/managing-your-repositorys-settings-and-features/customizing-your-repository/about-readmes).

### Branches
Você pode usar _branches_ no GitHub para isolar o trabalho que você não quer mesclar em seu projeto final ainda. _Branches_ permitem que você desenvolva recursos, corrija bugs ou experimente novas ideias com segurança em uma área contida do seu repositório. Normalmente, você pode criar um novo _branch_ a partir do _branch_ padrão do seu repositório — **main**. Isso cria uma nova cópia de trabalho do seu repositório para você experimentar. Depois que suas novas alterações forem revisadas por um colega de equipe, ou você estiver satisfeito com elas, você pode mesclar suas alterações no branch padrão do seu repositório.
Para saber mais sobre branches, leia ["Sobre branches"](https://docs.github.com/pt/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/about-branches).

### Forks
Um _fork_ é outra maneira de copiar um repositório, mas geralmente é usada quando você quer contribuir para o projeto de outra pessoa. Forkar um repositório permite que você experimente livremente as mudanças sem afetar o projeto original e é muito popular ao contribuir para projetos de software de código aberto!
Para saber mais sobre forks, leia ["Fork de um repositório"](https://docs.github.com/pt/pull-requests/collaborating-with-pull-requests/working-with-forks/fork-a-repo)

### Solicitações de pull
Ao trabalhar com branches, você pode usar uma solicitação de pull para contar aos outros sobre as mudanças que você quer fazer e pedir o feedback deles. Depois que uma solicitação de pull é aberta, você pode discutir e revisar as possíveis mudanças com os colaboradores e adicionar mais mudanças, se necessário. Você pode adicionar pessoas específicas como revisores do seu pull request, o que mostra que você quer o feedback delas sobre suas alterações! Assim que um pull request estiver pronto para uso, ele pode ser mesclado ao seu branch principal.
Para saber mais sobre pull requests, leia ["Sobre Pull Requests"](https://docs.github.com/pt/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/about-pull-requests).

### Issues
Issues são uma maneira de rastrear melhorias, tarefas ou bugs para seu trabalho no GitHub. Issues são uma ótima maneira de acompanhar todas as tarefas nas quais você deseja trabalhar para seu projeto e deixar que outros saibam no que você planeja trabalhar. Você também pode usar issues  para contar a um projeto de código aberto favorito sobre um bug que você encontrou ou um recurso que você acha que seria ótimo adicionar!

### Seu perfil de usuário

Sua página de perfil conta às pessoas a história do seu trabalho por meio dos repositórios nos quais você está interessado, das contribuições que você fez e das conversas que você teve. tinha. Você também pode dar ao mundo uma visão única de quem você é com seu perfil README. Você pode usar seu perfil para que futuros empregadores saibam tudo sobre você!
Para saber mais sobre seu perfil de usuário e adicionar e atualizar seu perfil README, leia ["Gerenciando seu perfil README"](https://docs.github.com/pt/account-and-profile/setting-up-and-managing-your-github-profile/customizing-your-profile/managing-your-profile-readme).

### Usando markdown no GitHub

Você já deve ter notado, mas pode adicionar um estilo divertido aos seus problemas, solicitações de pull e arquivos. ["Markdown"](https://guides.github.com/features/mastering-markdown/) é uma maneira fácil de estilizar seus problemas, solicitações de pull e arquivos com uma sintaxe simples. Isso pode ser útil para organizar suas informações e facilitar a leitura para outras pessoas. Você também pode inserir gifs e imagens para ajudar a transmitir seu ponto de vista!
Para saber mais sobre como usar o tipo de markdown do GitHub, leia ["Sintaxe básica de escrita e formatação"](https://docs.github.com/pt/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax).

#### Navegando no GitHub Explore

O GitHub Explore é um ótimo lugar para fazer exatamente isso... explore :smile: Você pode encontrar novos projetos, eventos e desenvolvedores para interagir.

Você pode conferir o site do GitHub Explore [em github.com/explore](https://github.com/explore). Quanto mais você interagir com o GitHub, mais personalizada será sua visualização do Explore.

## 📚  Recursos 
* [A short video explaining what GitHub is](https://www.youtube.com/watch?v=w3jLJU7DT5E&feature=youtu.be) 
* [Git and GitHub learning resources](https://docs.github.com/en/github/getting-started-with-github/git-and-github-learning-resources) 
* [Understanding the GitHub flow](https://guides.github.com/introduction/flow/)
* [How to use GitHub branches](https://www.youtube.com/watch?v=H5GJfcp3p4Q&feature=youtu.be)
* [Interactive Git training materials](https://githubtraining.github.io/training-manual/#/01_getting_ready_for_class)
* [GitHub's Learning Lab](https://lab.github.com/)
* [Education community forum](https://education.github.community/)
* [GitHub community forum](https://github.community/)

# Nosso primeiro programa em C++

Desenvolva um simples programa *Hello World* em C++ em um arquivo chamado `helloworld.cpp`. Um "Hello World" é um programa que simplesmente imprime na saída padrão a frase "Hello, World!". O código a seguir pode ser utilizado caso queira:

```c++
#include <iostream>

int main() {   
   std::cout << "Hello, World!" << std::endl;   
   return 0;
}
```

Exemplo da execução do programa:

```bash
$ ./helloworld
Hello, World!
```

Inclua os arquivos criados/modificados, e faça o processo de _commit_ e _push_ para submeter o seu código para o repositório remoto! Em seguida valide se seu código passou no teste!