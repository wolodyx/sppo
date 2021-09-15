jupyter-book build --all --builder html .
cp -r report/reveal.js _build/html/report
cp -r report/images _build/html/report
