int cur=0;
	for(int i=1;i<=30;++i){
		if(v[cur]!=i){
			print(i);
			--cur;
		}
        ++cur;
	}

vector<bool> b(30);//b[i]: 人iが提出したかどうか
	REP(i,28) {
		cin >> v[i];--v[i];//0-indexedに変換
	}
	REP(i,28){
		b[v[i]]=1;//提出した人をマーク
	}
	REP(i,30){
		if(b[i]==0){
			print(i+1);//1-indexedに変換
		}
	}
