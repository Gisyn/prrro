#include<stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main(){
	printf("无人商店");
	int n;
	int o = 0;
	struct store
	{
		char user[100];
		char password[100];
		float ye;
	};
	struct store a[100] = { 0 };
	struct store manage = { "123456789", "123456789" };
	struct store m2;
	struct store r;
	struct store t;
	struct store rr;
	int nu = 0;
	int c3 = 0;
	int s = 0;
	struct goods{
		int num;
		char name[30];
		float price;
		int quantity;
		int  sale;
	}; struct goods goo[100] = { 0 };
	int c2;
	int yue = 0;
	struct zsj{
		float yye;
		int dds;
	}; struct zsj zong[12] = { 0 };
	while (1){
		printf("登录请按1,注册请按0,管理请按5\n");
		scanf("%d", &n);
		if (n == 0){
			int l = 1;
			while (l){
				printf("用户名;");
				scanf("%s", r.user);
				int j = 101; int o1 = 0;
				while (j--){
					int k = strcmp(r.user, a[o1].user);
					o1++;
					if (!k){
						printf("用户名已存在"); break;
					}
					else{
						l = 0; break;
					}
				}
			}
			printf("密码:");
			scanf("%s", &r.password);
			int b = 1; 
			while (b){
				int o2 = 0;
				printf("请再次输入密码;");
				scanf("%s", &t.password);
				int c = strcmp(r.password, t.password);
				b = c;
				if (!c)
				{
					int b9 = 100,b10 = 0;
					while (--b9){
						a[s].user[b10] = r.user[b10]; a[s].password[b10] = r.password[b10]; b10++;
					}
					s++;
					printf("注册成功\n");
				}
				else{ printf("密码不一致\n"); o2++; }
			}
		}

		if (n == 1){
			int h = 1;
			while (h){
				o = 0;
				struct store q = { 0 };
				printf("用户名;");
				scanf("%s", &q.user);
				printf("密码:");
				scanf("%s", &q.password);
				int d = 101;
				int z = 1;
				struct shopping{
					int num;
					int name;
					float price;
					int many;
					float much;
				}; struct shopping list[100] = { 0 };
				while (d--){
					int f = strcmp(q.password, a[o].password);
					int g = strcmp(q.user, a[o].user);
					o++;
					int a12 = o - 1;
					if (f == 0 && g == 0){
						z = 0; printf("登陆成功\n");
						h = 0;
						int s1 = 0;
						float s3 = 0;
						while (1){
							printf("1.商品界面 2.修改密码 3注销账户 4.余额 5退出登录\n");
							int a9;
							scanf("%d", &a9);
							if (a9 == 1){
								while (1){
									int d5 = 100;
									int d6 = 0;
									while (d5--){
										int e5 = goo[d6].num;
										if (e5){ printf("编号:%d 商品:%s 价格:%.2f 库存:%d\n", goo[d6].num, goo[d6].name, goo[d6].price, goo[d6].quantity); }
										d6++;
									}
									printf("1.购买 2.结束 ");
									int d9;
									scanf("%d", &d9);
									if (d9 == 1){
										printf("输入要购买的商品编号");
										int d7;
										scanf("%d", &d7);
										list[s1].num = d7;
										printf("输入购买的数量");
										int d8;
										scanf("%d", &d8);
										d7--;
										list[s1].name = d7;
										list[s1].many = d8;
										list[s1].much = goo[d7].price*d8;
										zong[yue].yye += list[s1].much;
										goo[d7].quantity -= d8;
										goo[d7].sale += d8;
										s1++;
									}
									else{
										int fq = s1;
										printf("购物清单\n编号  名称  单价  数量  需支付\n");
										while (s1--){
											int s2 = list[s1].name; printf("%d    %s   %2.f    %d    %2.f\n", list[s1].num, goo[s2].name, goo[s2].price, list[s1].many, list[s1].much);
											s3 += list[s1].much;
											break;
										}
										printf("共需支付%2.f\n", s3);
										int zf;
										float ye = 0;
										printf("1手机支付,2余额支付,3放弃支付");
										scanf("%d", &zf); if (zf == 1){ printf("支付成功"); zong[yue].dds += 1; }
										if (zf == 2){
											if (a[a12].ye < s3){ printf("余额不足"); }
											else{ printf("支付成功"); a[12].ye -= s3; zong[yue].dds += 1; }
										}
										if (zf == 3){ while (fq--){ int fq1 = 0; int fq2 = list[fq1].num - 1; goo[fq2].quantity += list[fq1].many; goo[fq2].sale -= list[fq1].many; zong[yue].yye -= list[fq1].much; } }
										break;
									}
									break;
								}
							}if (a9 == 2){
								printf("请输入密码"); char a10[100]; scanf("%s", &a10); int a11 = strcmp(a10, a[a12].password); if (a11){ printf("密码错误\n"); }
								else{
									printf("请输入新密码"); char a13[100] = { 0 }; scanf("%s", &a13); int a14 = 0; int a15 = 100; while (--a15){ a[a12].password[a14] = a13[a14]; a14++; }
								}
							}int a16=0; if (a9 == 3){
								if (a[a12].ye){ printf("用户余额%2.f,是否消费或提现\n1.是 2.否", a[a12].ye); scanf("%d", &a16); }if (a16 == 2||a16==0){ printf("是否确定注销用户\n2.是 3.否");  scanf("%d", &a16); } if (a16 == 2){ int a18 = 100; int a19 = 0; while (--a18){ a[a12].user[a19] = 0; a[a12].password[a19] = 0; }break; }
							}if (a9 == 4){ printf("余额:%2.f 1.充值 2.提现 3.返回", a[a12].ye); int a20; scanf("%d", &a20); if (a20 == 1){ printf("请输入充值金额"); float a21; scanf("%f", &a21); a[a12].ye += a21; }if (a20 == 2){ printf("请输入提现金额"); float a22; scanf("%f", &a22); if (a[a12].ye < a22){ printf("余额不足"); } else{ a[a12].ye += a22; } } }

							if (a9 == 5){ break; }
						}
					}
				}if (z){ printf("用户名或密码错误\n"); break; }
				
			}
		}
			if (n == 5){
				printf("请输入账号\n");
				scanf("%s", &m2.user);
				printf("请输入密码\n");
				scanf("%s", &m2.password);
				int u1 = strcmp(m2.user, manage.user);
				int p1 = strcmp(m2.password, manage.password);
				if (u1 == 0 && p1 == 0){
					printf("登陆成功\n");
					while (1){
						int i1[100], j1, i2,i4=0;
						for (i2=0; i2 < 100; i2++){ i1[i2] = i2; }//i1[100]={0,1,2,3,...,98,99}

						for (i2=0 ; i2 < 100; i2++){
							for (j1 = 1; j1 < 100 - i2; j1++){
								int j2 = j1 - 1;
								if (goo[i4].sale >goo[j1].sale){
									int tmp = i1[j1]; i1[j1] = i1[j2]; i1[j2] = tmp;
								}
								else{ i4++; }
							}
						}
						int d1 = 100;
						int d2 = 99;
						while (d1--){
						 int d3 = i1[d2]; int i3 = goo[d3].num;
							if (i3){ printf("编号:%d 商品:%s 价格:%.2f 库存:%d 销量:%d\n", goo[d3].num, goo[d3].name, goo[d3].price, goo[d3].quantity, goo[d3].sale); }
							d2--;
						}
						printf("1.增加商品 2.删除商品 3.更改价格 4.更改库存 5.报表 6.删除用户 7.退出");
						scanf("%d", &c2);
						if (c2 == 1){
							goo[c3].num = ++nu;
							printf("输入商品名称");
							scanf("%s", &goo[c3].name);
							printf("输入商品价格");
							scanf("%f", &goo[c3].price);
							printf("输入库存");
							scanf("%d", &goo[c3].quantity);
							printf("输入销量");
							scanf("%d", &goo[c3].sale);
							c3++;
						};
						if (c2 == 2){
							int c4;
							printf("输入要删除的商品编号");
							scanf("%d", &c4);
							c4 -= 1;
							goo[c4].num = 0;
						};
						if (c2 == 3){
							printf("输入要更改价格的商品编号");
							int c5;
							scanf("%d", &c5);
							c5 -= 1;
							printf("该商品现在的价格是%.2f,输入更改的价格", goo[c5].price);
							scanf("%f", &goo[c5].price);
						};
						if (c2 == 4){
							printf("请输入要更改库存的商品编号");
							int c6;
							scanf("%d", &c6);
							c6 -= 1;
							printf("该商品现在库存是%d,输入更改的库存");
							scanf("%d", &goo[c6].quantity);
						}
						if (c2 == 5){
							int bb; printf("本月订单%d,本月营业额%2.f\n1.本月结单 2查看上月 3返回", zong[yue].dds, zong[yue].yye);
							scanf("%d", &bb); if (bb == 1){ yue++; }if (bb == 2){ printf("上个月订单%d,上个月营业额%d\n", zong[yue - 1].dds, zong[yue - 1].yye); }if (bb == 3){ continue; }
						}
						if (c2 == 6){ printf("输入要删除的用户名"); scanf("%s", &rr.user);
						int rr1 = 100, rr2; while (rr1--){ int rr3 = strcmp(rr.user, a[rr1].user); if (!rr1){
							if (a[rr1].ye){ printf("用户余额%2.f", a[rr1].ye); }
							else{ printf("是否确定删除该用户\n1.是 2.否");  scanf("%d", &rr2);  if (rr2 == 1){ int rr3 = 100; int rr4 = 0; while (--rr3){ a[rr1].user[rr4] = 0; a[rr1].password[rr4] = 0; } }}
						}
						}
						}
						if (c2 == 7){  break; }
					}
				}
				else{ printf("账号或密码错误\n"); }
			}
		}
	}
