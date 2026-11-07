<h1 align="center">🔌 Arduino — Sensor de Distância com Alerta</h1>

<p align="center">
  Protótipo com <b>sensor ultrassônico</b> que mede a distância de objetos e indica a proximidade com <b>LEDs</b> e <b>buzzer</b>.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Arduino-0D1117?style=for-the-badge&logo=arduino&logoColor=00979D" alt="Arduino" />
  <img src="https://img.shields.io/badge/C++-0D1117?style=for-the-badge&logo=cplusplus&logoColor=00599C" alt="C++" />
</p>

---

## ⚙️ Como funciona

A cada 200 ms o Arduino dispara um pulso no pino **TRIG**, mede o tempo de retorno no pino **ECHO** e converte para centímetros (`distância = tempo × 0,0343 / 2`). O valor também é enviado ao **Monitor Serial** (9600 baud).

| Distância | Resposta |
| --- | --- |
| menor que 10 cm | LED 1 aceso **+ buzzer** |
| 10 a 20 cm | LED 2 aceso |
| 21 a 29 cm | LED 3 aceso |
| 30 cm ou mais | LED 4 aceso |

## 🔧 Ligações

| Componente | Pino |
| --- | --- |
| Sensor ultrassônico — TRIG | 12 |
| Sensor ultrassônico — ECHO | 13 |
| LED 1 / LED 2 / LED 3 / LED 4 | 2 / 3 / 4 / 5 |
| Buzzer | 6 |

## 🚀 Como executar

1. Monte o circuito conforme a tabela acima.
2. Abra `Sensor_de_Movimento.c++` na Arduino IDE (se necessário, salve como `.ino`).
3. Envie para a placa e abra o Monitor Serial em 9600 baud para ver as leituras.

---

<p align="center">Desenvolvido por <a href="https://github.com/Beatrizxx06">Beatriz Xavier</a></p>
