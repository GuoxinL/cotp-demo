//
// Created by Guoxin on 2019-08-19.
//

#include <stdio.h>
#include <cotp.h>
#include <time.h>

//头文件路径
//加入第三方库
int main() {

    const char *base32_encoded_secret = "GMZDCMZRGIZDC===";
    int digits = 5;
    int period = 20;
    int algo = SHA1;
    cotp_error_t *err = NULL;
    char *fds = "44";
    printf("%s", fds);
//    char *totp = get_steam_totp(base32_encoded_secret, 3, err);
    char *totp = get_totp(base32_encoded_secret, digits, period, SHA512, err);
//    free(totp);
    printf("%s", totp);

}

