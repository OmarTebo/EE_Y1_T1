clc; clear all; close all;
I_sat = 5.182e-18;
V_d = [0 : 0.001 : 4];
V_s = 3.3;
R = 120;
I_d = I_sat * (exp(V_d / (1.85*0.026)) -1);
I_R = (V_s - V_d) / R;

figure
plot(V_d, I_R * 1000, 'b', V_d, I_d * 1000, 'r')
set(gca, 'FontSize', 10, 'FontWeight', 'bold', 'linewidth', 1.5);
set(findall(gcf, 'type', 'line'), 'linewidth', 1.5);
xlabel('Diode voltage V_d [V]'); ylabel('Diode Current I_d [mA]')
title('I_d & V_d across a diode connected in series with DC source and resistor')
axis([0 5 0 50])
