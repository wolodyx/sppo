jupyter-book build --builder html .
mkdir -p _build/html/report

# Two formats of the presentation: html and pdf.
for file in report/*.md
do
  file_html=`echo $file | sed 's/\.md/\.html/'`
  npx @marp-team/marp-cli@latest $file -o _build/html/$file_html
  file_pdf=`echo $file | sed 's/\.md/\.html/'`
  npx @marp-team/marp-cli@latest $file -o _build/html/$file_pdf
done
