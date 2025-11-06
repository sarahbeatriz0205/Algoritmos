// define um novo tipo de dado
struct data{ // no struct, tudo o que está dentro dele é público por padrão (passível de mudança)
    int dia, mes, ano; // esses são os campos (vulgo atributos do tipo de dado)
};

// também define um novo tipo de dado
class hora{ // no class, tudo é privado por padrão (passível de mudança)
    int horas, minutos, segundos; // esses são os campos (vulgo atributos do tipo de dado)
};