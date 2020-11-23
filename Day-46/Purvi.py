class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        src={''}
        dest={''}
        for i in range(len(paths)):
            src.add(paths[i][0])
        for i in range(len(paths)):
            dest.add(paths[i][1])
        ans=dest-src
        ans1 = [str(s) for s in ans]
        final = " ".join(ans1)
        return(str(final))