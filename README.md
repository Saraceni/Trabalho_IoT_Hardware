## Sinopse

Esta é a parte Hardware do trabalho final da matéria Desenvolvimento de Aplicações Móveis Aplicando Internet das Coisas do MBA em Desenvolvimento de Jogos e Aplicações para Dispositivos Móveis e IoT da FIAP. Este arquivo é executado em um Arduino Uno conectado a uma interface Bluetooth/Serial que permite a comunicação com um applicativo mobile que recebe o estado de uma das portas do Arduino a cada segundo. 

## Motivação

 Para demonstrar a integração de Hardware, Aplicação Mobile e Servidor Real Time esse projeto possui uma dinâmica simples na qual uma mudança no estado de uma porta do Arduino (Nível lógico alto ou baixo) é comunicada em tempo real com o app via Bluetooth, que por sua vez faz uma chamada HTTP a um servidor que disponibiliza uma pagina web a qual mostra o estado do hardware em tempo real.

 ## Utilizaçao

 A cada segundo o Arduino faz a leitura da sua porta e envia uma string "0" caso o nível lógico seja baixo (GND) ou "1" se for alto (+5V) para a aplicação móvel via Bluetooth.