cpf=[3, 8, 2, 9, 1, 5, 4, 0, 6, 2, 4];
acum1=0;

for k=1:9
    acum1 = acum1+(cpf(k)*(11-k));
end
sobra1 = acum1-11 * int(acum1/11);

if sobra1<2 then
    dig1=0;
else
    dig1=11-sobra1;
end


acum2=0;
for k =1:10
    acum2= acum2+(cpf(k)*(12-k));
end

sobra2 = acum2 - 11 * int(acum2 / 11);


if sobra2<2 then
    dig2=0;
else
    dig2 = 11-sobra2;
end

mprintf("Digito 1 calculado: %d | informado: %d\n", dig1, cpf(10));
mprintf("Digito 2 calculado: %d | informado: %d\n", dig2, cpf(11));

if (dig1==cpf(10)) & (dig2==cpf(11)) then
    disp("CPF Verdadeiro");
else
    disp("CPF Falso");
end
