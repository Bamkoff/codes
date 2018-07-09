all: ko_get ko_send pd_get pd_send

ko_get: ko_get.c
		gcc $< -o $@ -lrt

ko_send: ko_send.c
		gcc $< -o $@ -lrt

pd_get: pd_get.c
		gcc $< -o $@ -lrt
		
pd_send: pd_send.c
		gcc $< -o $@ -lrt
		

