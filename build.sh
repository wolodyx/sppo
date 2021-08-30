jupyter-book build --builder html .
mkdir _build/html/report

# Two formats of the presentation: html and pdf.
npx @marp-team/marp-cli@latest report/intro.md -o _build/html/report/intro.html
npx @marp-team/marp-cli@latest report/intro.md -o _build/html/report/intro.pdf
