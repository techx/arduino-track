---
layout: page
title: Blueprint 2020 Learnathon Arduino Track
---

![Blueprint 2020 banner]({{ site.baseurl }}/static/img/banner.jpg)

Arduino track content from [Blueprint 2020](https://blueprint.hackmit.org/).

Follow along with the slides **[here](slides.pdf)**!

## Lectures

<ol class="double-spaced">
  {% assign lectures = site.lectures | sort: 'number' %}
  {% for lecture in lectures %}
  <li>
    <a href="{{ site.baseurl }}{{ lecture.url }}">{{ lecture.title }}</a>
    {% if lecture.details %}
    <br>
    ({{ lecture.details }})
    {% endif %}
  </li>
  {% endfor %}
</ol>
