//
// Created by Guoxin on 2019-08-19.
//

#include <stdio.h>
#include <cotp.h>
#include <time.h>
#include <unistd.h>

char* getTime()
{
    time_t timep;
    time (&timep);
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S",localtime(&timep) );
    return tmp;
}
//头文件路径
//加入第三方库
int main() {

    const char *base32_encoded_secret = "GMZDCMZRGIZDC===";
    int digits = 10;   // 签名长度
    int period = 10;  // 时间步长
    int algo = SHA1;  // 算法类型
    cotp_error_t *err = NULL; // 响应错误
//    char *totp = get_steam_totp(base32_encoded_secret, 3, err);

    while (0 != 1) {
        char *totp = get_totp(base32_encoded_secret, digits, period, SHA512, err);
        printf("%s %s\n", getTime(), totp);
        sleep(1);
    }

}
